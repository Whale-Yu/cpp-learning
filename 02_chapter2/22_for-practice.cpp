// 进阶for循环案例：猜数字

// 使用for循环完成猜数字，要求：
// 1、创建一个数字变量，内容是1-10的随机数字
// 2、使用for循环，提供无限次猜测机会
// 3、猜对了退出，提示猜对了
// 4、猜错了，提示猜大了或者猜小了


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

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int num = getRandomNumber(1, 10); // 生成1-10的随机整数
    int guess;
    std::cout << "请猜一个1-10之间的数字：" << std::endl;
    std::cin >> guess;

    for (bool is_continue = true; is_continue;) {
        if (guess < num) {
            std::cout << "你猜的数字太小了，请再试一次：" << std::endl;
            std::cin >> guess;
        } else if (guess > num) {
            std::cout << "你猜的数字太大了，请再试一次：" << std::endl;
            std::cin >> guess;
        } else {
            is_continue = false; // 猜中，退出循环
            std::cout << "恭喜你，猜中了！" << std::endl;
        }
    }



    return 0;
}
