// 第一章 11 数据类型-实型

// 实型（浮点数），除了有float 还有以下
// float：单精度浮点数，通常占4个字节，有效位数约为6-7位
// double：双精度浮点数，精度比float高，通常占8个字节，有效位数约为15-16位
// long double：扩展精度浮点数，精度比double高，通常占16个字节（取决于不同平台），有效位数约为18-19位

// ！！！注意，实型没有signed和unsigned
// double和long double的有效位数仅作参考，取决于所用的编译器对标准的实现

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 

    // float单精度浮点数，4字节，6~7位有效位数
    // 有效位数：整数位、小数点、小数位
    float n1 = 1234567890;  //只提供了前7位的准确输出
    float n2 = 1.234567890; //只提供了前7位的准确输出


    std::cout << std::fixed; // 设置输出为小数显示，避免科学计数法
    std::cout.width(20); // 设置输出最大宽度（位数）
    std::cout << "单精度浮点数 n1 = " << n1 << "，占用字节数 = " << sizeof(n1) << std::endl;
    std::cout << "单精度浮点数 n2 = " << n2 << "，占用字节数 = " << sizeof(n2) << std::endl;

    // double双精度浮点数，8字节，15~16位有效位数
    double n3 = 1234567890.1234567890;
    std::cout << "双精度浮点数 n3 = " << n3 << "，占用字节数 = " << sizeof(n3) << std::endl;

    // long double扩展精度浮点数，16字节，18~19位有效位数
    long double n4 = 1234567890.1234567890;
    std::cout << "扩展精度浮点数 n4 = " << n4 << "，占用字节数 = " << sizeof(n4) << std::endl;


    return 0;
}
