// 第一章 14 转义字符

// ASCII表分为两类：非打印控制字符、打印字符
// 非打印控制字符：无法打印出形态，但是可以用于表示各种控制功能，如换行、制表等

// 如果要使用非打印控制字符，可以使用转义字符的形式
// 转义字符：将普通的字符使用\作为开头，将其含义进行转换，对照得到ASCII表的控制字符的功能
// \n   换行
// \t   水平制表
// \\   代表一个反斜线字符
// \'   代表一个单引号字符
// \"   代表一个双引号字符


#include <iostream>


#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // \n   换行
    std::cout << "你好呀 \n 我喜欢你" << std::endl;
    std::cout << "---------------" << std::endl;

    // \t   水平制表=键盘的tab
    // 一个\t可以补充到8个字符位
    std::cout << "hello\theima" << std::endl;
    std::cout << "a\titcast" << std::endl;
    std::cout << "---------------" << std::endl;

    // \\   \本身
    std::cout << "\\" << std::endl;
    std::cout << "---------------" << std::endl;
    
    // \'   单引号
    std::cout << "\'" << std::endl;
    std::cout << "---------------" << std::endl;

    // \"   双引号 
    std::cout << "\"" << std::endl;
    std::cout << "---------------" << std::endl;

    return 0;
}
