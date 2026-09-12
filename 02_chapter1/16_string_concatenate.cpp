// 第一章 16 字符串的拼接

// 使用+进行连接即可
// +仅适用于字符串和字符串进行连接,如果连接非字符串需要使用to_sting()[类型有python的str()]转换后进行连接

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    std::string name = "小鱼";
    std::string major = "计算机科学与技术";
    int age = 23;
    double height = 178.50;

    // to_string()函数:将内容转换成字符串类型
    std::string msg = "我叫" + name + ",我的专业是" + major + ",年龄是" + std::to_string(age) + ",身高是" + std::to_string(height);

    std::cout << msg << std::endl;



    return 0;

}