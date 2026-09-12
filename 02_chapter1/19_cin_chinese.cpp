// 第一章 19 cin中文乱码的解决

// 如果尝试使用cin读取中文,则会出现中文无法识别
// Clion IDE所带出的问题:
// 1.按照键盘:ctrl+shift+alt+/,选择Registry
// 2.取消勾选:run.processes.with.pty

// 代码层面也可以进行解决:
// 设置SetConsoleCP(CP_UTF8); 

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       // 追加这行：设置输入编码为 UTF-8
#endif

    std:: string s1;
    std::cout << "请输入一个中文字符串:" << std::endl;
    std::cin >> s1;
    std::cout << "输入的中文字符串:" << s1 << std::endl;

    return 0;

}
