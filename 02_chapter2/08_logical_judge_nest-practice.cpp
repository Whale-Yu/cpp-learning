/*
1、定义一个变量，数字类型，内容随意（1~10）
2、基于cin语句输入猜想的数字，判断语句的嵌套，提供三次机会，猜对输出“恭喜你，猜对了”，猜错输出“猜错了，请再试一次”，三次机会用完输出“很遗憾，三次机会用完了”
3、不使用while
*/

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int number = 5;
    int guess;
    int chance = 3;

    std::cout << "请输入你猜想的数字：";
    std::cin >> guess;

    if (guess == number){
        std::cout << "恭喜你，猜对了" << std::endl;
    }
    else {
        std::cout << "猜错了，请再试一次" << std::endl;
        std::cin >> guess;
        if (guess == number){
            std::cout << "恭喜你，猜对了" << std::endl;
        }
        else{
            std::cout << "猜错了，请再试一次" << std::endl;
            std::cin >> guess;
            if (guess == number){
                std::cout << "恭喜你，猜对了" << std::endl;
            }
            else{
                std::cout << "很遗憾，三次机会用完了" << std::endl;
            }
            }            
        }
}