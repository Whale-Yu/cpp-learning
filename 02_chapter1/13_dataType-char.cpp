// 第一章 13 数字类型-字符型

// ## char类型用来表示字符，支持有符号和无符号
// 类型           字节数  范围      映射表
// [signed] char  1字节  -128~127  ASCII表
// unsigned char  1字节  0~255     ASCII表

// ## ASCII表
// char类型本质上是数字，即内存中存储的是实际上的数字
// 比如A对应十进制65，a对应十进制97，更多见ASCII表

// char类型可存储内容：实际上就是ASCII表
// char无法存储中文（有别的方法）

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char ch1 = 97;
    char ch2 = 65;
    std::cout << ch1 << " " << ch2 << std::endl;
    // 输出：a A 

    char ch3 = 'a';
    std::cout << ch3 + 1 << std::endl; //数字格式化
    // 输出：98

    char ch4 = 'a' + 2;
    std::cout << ch4 << std::endl;
    // 输出：c

    
    return 0;
}