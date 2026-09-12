// 第一章 24 运算符-三元运算符

// 三元运算符:是一种三目运算符,用于对逻辑进行判断,根据判断结果提供不同值
// 语法:产出bool的结果的表达式? 值1 : 值2
// 如果?之前的表达式=true,则提供值1的结果
// 结果=false,则提供值2的结果

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
#include <cstring>

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);       
#endif

    // 表达式? v1 : v2;
    int num1, num2;
    std::cout << "请输入num1的值" << std::endl;
    std::cin >> num1;

    std::cout << "请输入num2的值" << std::endl;
    std::cin >> num2;

    std::string value = num1 > num2? "num1是大于num2" : "num1是小于num2";
    std::cout << value << std::endl;

    return 0;

}