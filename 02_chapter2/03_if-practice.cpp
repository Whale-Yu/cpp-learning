/*
使用cin获取键盘录入的年龄数据，完成如下判断：
1、对年龄进行判断，如果小于18，则不收取门票
2、输出内容如下：
欢迎来的杭州乐园，儿童免费，成人收费
请输入你的年龄：
您未成年，免费游玩，欢迎你小朋友！
祝您游玩愉快
*/

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif

    std::cout << "欢迎来的杭州乐园，儿童免费，成人收费" << std::endl;
    std::cout << "请输入你的年龄：" << std::endl;

    int age;
    std::cin >> age;


    if  (age < 18){
        std::cout << "您未成年，免费游玩，欢迎你小朋友！" << std::endl;
    }


    return 0;

}