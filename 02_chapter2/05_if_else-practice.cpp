/*
通过cin语句获取键盘输入的身高
判断身高是否超过120cm，并通过cout给出提示
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
    int height;
    std::cout << "请输入身高（cm）：";
    std::cin >> height;
    if (height > 120){
        std::cout << "身高超过120cm，游玩需要门票" << std::endl;
    }else{
        std::cout << "身高未超过120cm，游玩不需要门票" << std::endl;
    }


    return 0;

}