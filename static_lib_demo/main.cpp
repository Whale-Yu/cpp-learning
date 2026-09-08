#include "tracking_wrapper.hpp"

#include <algorithm>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

int main(int argc, char** argv) {
    try {
        // 默认打开摄像头 0，也可以通过第一个参数指定其他摄像头编号。
        const int camera_index = argc > 1 ? std::stoi(argv[1]) : 0;
        cv::VideoCapture camera(camera_index);
        if (!camera.isOpened()) throw std::runtime_error("cannot open camera");

        // 优先使用摄像头报告的帧率；无法获取时保留默认值 30 FPS。
        tracking::TrackerConfig config;
        const double camera_fps = camera.get(cv::CAP_PROP_FPS);
        if (camera_fps > 0.0) config.imm.fps = camera_fps;
        auto tracker = tracking::create_tracker("imm", config);

        cv::Mat frame;
        if (!camera.read(frame)) throw std::runtime_error("cannot read first frame");

        // 使用首帧中心的 100x100 区域作为初始目标框，小尺寸画面会自动收缩。
        constexpr int kInitialBoxSize = 100;
        const int box_width = std::min(kInitialBoxSize, frame.cols);
        const int box_height = std::min(kInitialBoxSize, frame.rows);
        const cv::Rect initial_box{
            (frame.cols - box_width) / 2,
            (frame.rows - box_height) / 2,
            box_width,
            box_height,
        };
        tracker->init(frame, initial_box);

        // 逐帧读取摄像头、更新跟踪结果并显示；按 Esc 或 q 退出。
        while (camera.read(frame)) {
            const cv::Rect result = tracker->track(frame);
            if (!result.empty()) {
                cv::rectangle(frame, result, cv::Scalar(0, 255, 0), 2);
            }

            cv::imshow("tracker", frame);
            const int key = cv::waitKey(1) & 0xff;
            if (key == 27 || key == 'q') break;
        }

        return 0;
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }
}
