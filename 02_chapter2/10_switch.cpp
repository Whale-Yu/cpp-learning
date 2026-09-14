// 第二章 10 switch控制语句

// 基本语法：
/*
    switch (表达式)
    {
        case 常量表达式1:
            语句1;
            break;
        case 常量表达式2:
            语句2;  
            break;
        ...
        default:
            语句n;
    }
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
    // // 输入数字1~7，输出星期几
    // int day;
    // std::cout << "请输入数字1~7：";
    // std::cin >> day;
    // switch (day)
    // {
    // case 1:
    //     std::cout << "星期一" << std::endl;
    //     break;
    // case 2:
    //     std::cout << "星期二" << std::endl;
    //     break;
    // case 3:
    //     std::cout << "星期三" << std::endl;
    //     break;
    // case 4:
    //     std::cout << "星期四" << std::endl;
    //     break;
    // case 5:
    //     std::cout << "星期五" << std::endl;
    //     break;
    // case 6:
    //     std::cout << "星期六" << std::endl;
    //     break;
    // case 7:
    //     std::cout << "星期日" << std::endl;
    //     break;
    // default:
    //     std::cout << "输入错误" << std::endl;
    // }

    // 给电影打分，10和9是优秀，8和7是一般，6和5是普通，低于5是差
    int score;
    std::cout << "请输入分数：";
    std::cin >> score;
    switch (score)
    {
    case 10:
    case 9:
        std::cout << "优秀" << std::endl;
        break;

    case 8:
    case 7:
        std::cout << "一般" << std::endl;
        break;

    case 6:
    case 5:
        std::cout << "普通" << std::endl;
        break;
        
    default:
        std::cout << "差" << std::endl;

    }




    return 0;
}
