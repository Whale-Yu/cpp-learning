// 设置一个范围1-100的随机整数变量，通过while配合cin语句，判断输入的数字是否等于随机数
// - 无限次机会，直到猜中为止
// - 每一次猜不中，提示用户输入的数字是大了还是小了
// - 猜完数字后，提示猜了几次

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
#include <random> // 引入随机数生成器头文件


int getRandomNumber(int min, int max) {
    // 创建一个随机数生成器 （一定要加std::或者顶部加上std命名空间）
    std::random_device rd; // 获取随机数种子
    std::mt19937 gen(rd()); // 使用Mersenne Twister算法生成随机数

    // 定义一个均匀分布的整数范围
    std::uniform_int_distribution<> dis(min, max);

    // 生成一个随机数并输出
    int randomNum = dis(gen);

    return randomNum;
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int randomNum = getRandomNumber(1, 100); // 生成1-100的随机整数
    int guess;
    int attempts = 0; // 记录猜测次数
    bool correct = false; // 判断是否猜中
    while (!correct) {
        std::cout << "请输入你猜的数字（1-100）：";
        std::cin >> guess;
        attempts++;

        if (guess < randomNum) {
            std::cout << "你猜的数字太小了，请再试一次。" << std::endl;
        } else if (guess > randomNum) {
            std::cout << "你猜的数字太大了，请再试一次。" << std::endl;
        } else {
            correct = true; // 猜中
            std::cout << "恭喜你，猜中了！你总共猜了 " << attempts << " 次。" << std::endl;
        }
    }

    return 0;
}
