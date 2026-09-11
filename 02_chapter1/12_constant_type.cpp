// 第一章 12 C++常量类型的确定

// 对于如下代码，如何确定2021整型字面量的类型呢？
// cout << “我出生于：” << 2001 << "年" << endl;

// 对于常量的类型确定遵循啊最小原则（范围不足，会自动扩容，顺序如下）：
// - 整数：int > unsigned int > long > unsigned ling > long long > unsigned long long
// - 小数：double > long double

// 按照所书写的字面量的值，来确定类型，默认位int，从小到大进行适配
// 或按照指定后缀确定

// 后缀（大小写均可 ）      含义
// U                    无符号数
// L                    整数long、浮点数long double
// UL                   unsigned long
// ULL                  unsigned long long        
// F                    浮点数float
// D                    浮点数double                                 


#include <iostream>

// 判断当前平台，如果是windows需要进行设置编码
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // 不带后缀的数字的类型确定，整数的类型最小是int，小数的类型最小是double
    std::cout << "10的字节数是：" << sizeof(10) << std::endl; // 4
    std::cout << "999999999999的字节数是：" << sizeof(999999999999) << std::endl; // 8
    std::cout << "3.14的字节数是：" << sizeof(3.14) << std::endl; // 8
    
    // 带后缀的
    // U无符号意思
    10U;

    // L long
    std::cout << "10L的字节数是：" << sizeof(10L) << std::endl;

    // F float 
    std::cout << "3.14L的字节数是：" << sizeof(3.14L) << std::endl;
    std::cout << "3.14的字节数是：" << sizeof(3.14) << std::endl;

    // D double（一般不写，写与不写没有差别）
    std::cout << "3.14D的字节数是：" << sizeof(3.14D) << std::endl;
    std::cout << "3.14的字节数是：" << sizeof(3.14) << std::endl;



    
    return 0;
}