// 第一章 18 cin数据输入

// 通过cout打印输出到控制台,同时可以通过cin进行数据的输入
// 语法: 
// 数据类型 变量;  //声明变量
// cin >> 变量;   // 输入的数据提供给变量

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // cin >> 变量;
    int num;
    std::cout << "请输入一个整数:" << std::endl;
    std::cin >> num;

    // 支持各种数据类型的输入
    double num2;
    std::cout << "请输入一个实型(小数):" << std::endl;
    std::cin >> num2;

    char c;
    std::cout << "请输入一个字符:" << std::endl;
    std::cin >> c;

    std::string s;
    std::cout << "请输入一个字符串:" << std::endl;
    std::cin >> s;

    std::cout << "输入的整数值:" << num << std::endl;
    std::cout << "输入的小数值:" << num2 << std::endl;
    std::cout << "输入的字符:" << c << std::endl;
    std::cout << "输入的字符串:" << s << std::endl;

    // !!!!不像python,不能再cin内设置提示信息
    // int num;
    // std::cin >> "请输入一个整数:" >> num;
    // std::cout << num << std::endl;

    return 0;

}
