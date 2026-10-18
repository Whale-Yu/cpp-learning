// 第二章 12 枚举类型

// 枚举：本质上是一个被命名的整形常数的集合
// - 在c/c++中它是一种基本数据类型
// - 其主要作用是提高代码的可读性、可维护性和键入性
// - 因为枚举可以将一些数字或字符串符号化，以此增强程序的可读性和可维护性

// 比如某些固定状态的判断，如：
// 对季节进行判断，如“春”、“”夏”、“秋”、“冬”

// 传统的数字判断：1-春、2-夏、3-秋、4-冬

// 枚举的语法：
// - enum 枚举类型名 {枚举值1, 枚举值2, 枚举值3, ...};
// - 枚举每一个元素，都有整数标号，默认从0开始，依次递增
// - 起始标号可以自行设置，如：enum Season {Spring = 1, Summer, Fall, Winter};从1开始，依次递增

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // 1、枚举的定义
    // 询问小朋友喜欢的颜色：红黄蓝三选一
    enum Color
    {
        Red,    // 默认是0
        Yellow, // 默认是1
        Blue    // 默认是2
    };

    int num;
    std::cout << "小朋友你们喜欢什么颜色？(0-红色，1-黄色，2-蓝色)：" << std::endl;
    std::cin >> num;
    
    // 2、枚举的使用
    switch (num)
    {
        case Red:
            std::cout << "小朋友喜欢红色！" << std::endl;
            break;
        case Yellow:
            std::cout << "小朋友喜欢黄色！" << std::endl;
            break;
        case Blue:
            std::cout << "小朋友喜欢蓝色！" << std::endl;
            break;
        default:
            std::cout << "输入无效！" << std::endl;
    }

    return 0;
}