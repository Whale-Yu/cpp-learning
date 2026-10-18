// 第二章 13 while循环语句

// while语法
// while (条件表达式) {
//     循环体语句;
// }


#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // 1、while基础应用
    // bool condition = true;
    // int num = 0; //控制变量
    
    // while (condition){
    //     std::cout << "hello" << std::endl;
    //     num++;

    //     if (num > 5){
    //         condition = false;
    //     }
    // }

    // std::cout << "循环结束" << std::endl;

    // 2、while循环的需求
    // 我要向小美表白，每天都表白，连续表白10天
    int day = 1;
    while (day <= 10){
        std::cout << "今天是第" << day << "天，小美，我喜欢你" << std::endl;
        day++;
    }
    std::cout << "表白结束" << std::endl;

    return 0;
}