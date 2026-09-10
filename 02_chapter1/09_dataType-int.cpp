// 第一章 09 数据类型-整形

// short: 2字节，-32768~32767
// int: 4字节，-2147483648~2147483647
// long: windows为4字节,linux(32位)为4字节,linux(64位)为8字节
// long long: 8字节，-9223372036854775808~9223372036854775807

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // linux下不需要设置编码，windows下需要设置编码为utf-8，否则中文输出乱码

    short n0 = 32767;
    int n1 = 10;
    long n2 = 20;
    long long n3 = 30;

    std::cout << "n0 = " << n0 << std::endl;
    std::cout << "n1 = " << n1 << std::endl;
    std::cout << "n2 = " << n2 << std::endl;
    std::cout << "n3 = " << n3 << std::endl;

    // sizeof() 可以获取数据类型的字节数
    std::cout << "short类型,占用字节数: " << sizeof(n0) << std::endl;
    std::cout << "int类型,占用字节数: " << sizeof(n1) << std::endl;
    std::cout << "long类型,占用字节数: " << sizeof(n2) << std::endl;
    std::cout << "long long类型,占用字节数: " << sizeof(n3) << std::endl;
    return 0;
}