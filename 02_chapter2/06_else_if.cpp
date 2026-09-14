// 第二章 06 else if语句


#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif

    int score = 0;
    std::cout << "请输入你的成绩：";
    std::cin >> score;

    if(score >= 90){
        std::cout << "优秀" << std::endl;
    }else if(score >= 80){
        std::cout << "良好" << std::endl;
    }else if(score >= 70){
        std::cout << "中等" << std::endl;
    }else if(score >= 60){
        std::cout << "及格" << std::endl;
    }else{
        std::cout << "不及格" << std::endl;
    }

    return 0;

}