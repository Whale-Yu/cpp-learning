// 第一章 10 无符号和有符号数字

// unsigned: 无符号数字，不能表示负数，范围是0~最大值
// signed: 有符号数字，能表示负数，范围是-最大值~

// [] 表示可选，如 signed int 和 int 是一样的，都是有符号整型
// [signed] short int a // （有符号）短整型
// [signed] int b; // （有符号）整型
// [signed] long int c; // （有符号）长整型
// [signed] long long int d; // （有符号）长长整型

// unsigned short int e; // 无符号短整型
// unsigned int f; // 无符号整型
// unsigned long int g; // 无符号长整型
// unsigned long long int h; // 无符号长长整型

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 

    signed int a = -10; // 有符号整型
    int b = 10; // 有符号整型，默认是有符号整型

    unsigned int c = 10; // 无符号整型，必须加 unsigned 关键字
    // unsigned int c = -10; 
    // 输出：无符号整型 c = 4294967286


    std::cout << "有符号整型 a = " << a << std::endl;
    std::cout << "有符号整型 b = " << b << std::endl;
    std::cout << "无符号整型 c = " << c << std::endl;


    // 无符号快捷写法(int、short、long)
    u_int d = 10; // 等同于 unsigned int d = 10; 
    u_short e = 10; // 等同于 unsigned short e = 10;
    u_long f = 10; // 等同于 unsigned long f = 10;

    std::cout << "无符号整型 d （快捷写法）= " << d << std::endl;
    std::cout << "无符号短整型 e （快捷写法）= " << e << std::endl;
    std::cout << "无符号长整型 f （快捷写法）= " << f << std::endl;


    return 0;
}