// 第三章 08 指针基础

// 指针：特定类型数据在内存中的存储地址，即内存地址（指针=内存地址）

// 指针只是一个逻辑概念，其实际应用是：指针变量

// 指针变量的定义语法：
// 1、先声明，后赋值
// 变量类型 *指针变量名
// 指针变量名 = &变量名; // 取变量的内存地址
// 2、声明时直接赋值
// 变量类型 *指针变量名 = &变量名;

// *符号有两种含义：
// 1、声明时：*p，表示变量p，是指针变量（存的是内存地址）
// 2、使用时：*p，表示取该指针变量所指向的内存地址中存储的数据
// int num = 10;
// int *p;
// p = &num;
// cout << p; // 输出num的内存地址
// cout << *p; // 输出num的值10

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // 指针的基础操作
    int num = 10;
    int *p; // 声明一个指针变量p
    p = &num; // 将num的内存地址赋值给指针变量p

    std::cout << "num的值: " << num << std::endl; // 输出num的值
    std::cout << "num的内存地址: " << &num << std::endl; // 输出num的内存地址
    std::cout << "指针p的值（num的内存地址）: " << p << std::endl; // 输出指针p的值，即num的内存地址
    std::cout << "通过指针p访问num的值: " << *p << std::endl; // 输出通过指针访问到的num的值

    // 直接对内存的操纵
    *p = 20; // 通过指针p修改num的值，等同于 num = 20;
    std::cout << "*p赋值后，结果：" << *p << std::endl; // 输出通过指针访问到的num的值
    std::cout << "修改后num的值: " << num << std::endl; // 输出修改后的num的值


    return 0;
}