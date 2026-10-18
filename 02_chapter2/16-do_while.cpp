// 第二章 16 do-while循环语句

// while循环，如果条件判断不成立，可以做到一次都不执行循环体的代码
// do while循环，如果条件判断不成立，也会执行一次循环体的代码

// 语法：
// do {
//     循环体语句;
// } while (条件表达式);

// 1、执行一次循环体
// 2、执行判断
// 3、进行条件判断。成功，执行循环体；失败，结束循环
// 4、重复2-3

// 对比while循环
// while(条件表达式) {
//     循环体语句;
// }
// 1、执行判断
// 2、进行条件判断。成功，执行循环体；失败，结束循环
// 3、重复1-2

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // 猜数字
    int num = 0;
    do {
        std::cout << "请输入一个数字：";
        std::cin >> num;
    } while (num != 5);
    std::cout << "恭喜你，猜对了！" << std::endl;


    return 0;
}