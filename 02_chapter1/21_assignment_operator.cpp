// 第一章 21 运算符-赋值运算符

// 赋值运算符:是一种双目运算符,用于将右侧表达式的值赋予左侧变量
// = += -= *= /= %=

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif

    // +=  *= /= %=
    int num = 2;
    num += 3;  // 等同于num = num + 3;
    std::cout << "num += 3的结果是:" << num << std::endl;

    // -=
    num -= 1;  // 等同于num = num - 1;
    std::cout << "num -= 1的结果是:" << num << std::endl;

    // *=
    num *= 3;  // 等同于num = num * 3;
    std::cout << "num *= 3的结果是:" << num << std::endl;

    // /=
    num /= 2;  // 等同于num = num * 3;
    std::cout << "num /= 5的结果是:" << num << std::endl;

    // %=
    num %= 1;  // 等同于num = num % 3;
    std::cout << "num %= 5的结果是:" << num << std::endl;



    return 0;

}