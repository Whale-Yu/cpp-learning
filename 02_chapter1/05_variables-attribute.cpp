// 第一章 05-变量的特征

// 变量的特征：变量存储的数据时可以发送改变的

// 修改变量值，只需要再次使用幅值语句即可，即：变量名=变量值

#include <iostream>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    int age = 21;

    std::cout << "年龄: " << age << std::endl;

    age = 22; // 修改变量值
    // 不可以 age = 22.5; // 错误，不能将浮点数等其他类型赋值给整型变量

    std::cout << "修改后的年龄: " << age << std::endl;


    // 进行数学计算，可以用：+ - * / 等运算符
    int a = 10;
    int b = 3;
    a = a - 2;
    std::cout << "a - 2 = " << a << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl; // 整数除法，结果为整数

    return 0;
}
