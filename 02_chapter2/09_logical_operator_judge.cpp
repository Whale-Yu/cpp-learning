// 第二章 09 基于逻辑运算符完成复杂的判断

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    // !
    int num = 1;
    if (!num){
        std::cout << "if被执行" << std::endl;
    } else {
        std::cout << "else被执行" << std::endl;
    }

    // &&
    int age ,height;
    std::cout << "请输入年龄：";
    std::cin >> age;
    std::cout << "请输入身高：";
    std::cin >> height;
    if (age < 18 && height < 120){
        std::cout << "免费游玩" << std::endl;
    } else {
        std::cout << "不可以免费游玩" << std::endl;
    }

    // ||
    int age ,height;
    std::cout << "请输入年龄：";
    std::cin >> age;
    std::cout << "请输入身高：";
    std::cin >> height;
    if (age < 18 || height < 120){
        std::cout << "免费游玩" << std::endl;
    } else {
        std::cout << "不可以免费游玩" << std::endl;
    }


    return 0;
}