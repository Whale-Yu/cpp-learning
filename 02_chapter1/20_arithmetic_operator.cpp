// 第一章 20 运算符-算数运算符

// 算数运算符:通过指定的符合,对程序内的数据,进行数学运算
// + - * / % ++(分前置:先计算后赋值 后置:先赋值后计算) --(分前置和后置) 

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif

    // 单目(只有1个操作符):+ -
    int num1 = +10;     // +表示整数
    int num2 = -10;     // -表示负数

    std::cout << num1 << num2 << std::endl;

    // 双目(有2个操作符):+ - * / %
    int num3 = 5 + 5;
    int num4 = 5 - 3;
    int num5 = 5 * 5;
    int num6 = 10 / 3;  //相除,如果都是整数是整除
    int num7 = 10 % 3;  //取余
    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;
    std::cout << num6 << std::endl;
    std::cout << num7 << std::endl;

    // 单目:++ --
    int a = 2;
    int b = ++a;    //前置递增 先增后赋
    std::cout << "a=" << a << ",b=" << b <<std::endl;

    int c = 2;
    int d = c++;    //后置递增 先赋后增
    std::cout << "c=" << c << ",d=" << d <<std::endl;


    return 0;

}