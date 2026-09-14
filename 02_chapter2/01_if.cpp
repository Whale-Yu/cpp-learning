// 第二章 01 if逻辑判断语句


#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif

    int money = 5000;

    if (money >= 10000){
        std::cout << "我要去新疆、川西、云南徒步" << std::endl;
    } 


    return 0;

}