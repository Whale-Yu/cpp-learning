// 第二章 07 逻辑判断语句的嵌套

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif
    int a = 1;
    int b = 2;
    int c = 3;
    if (a > b){
        if (a > c){
            std::cout << "a is the larger than b and c" << std::endl;
        }
        else{
            std::cout << "c is the larger than a and b" << std::endl;
        }
    }
    else{
        std::cout << "b is the larger than a" << std::endl;
    }

    return 0;
}