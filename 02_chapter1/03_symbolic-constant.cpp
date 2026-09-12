// 第一章 03-符号常量

// 符号常量：使用标识符去定义的常量；简单来说符号常量就是给常量起一个名字

// 定义语法：#define 标识符 常量
// 1、#define：宏命令 固定开头；
// 2、标识符：符号常量的名称，是标识符的一种，字母建议全部大写
// 3、常量：符号常量的值，可以是整数、浮点数、字符、字符串等

// 示例
// #define FAT_BMI 25
// #define J2C_RATE 4.19

#include <iostream>
#include <windows.h>


#define FAT_BMI 25
#define J2C_RATE 4.19

int main() {

    // 方式1：
    // SetConsoleOutputCP(CP_UTF8); // Set Console Output Code Page 设置控制台输出为UTF-8编码
    // 方式2：
    system("chcp 65001");

    // 2、使用符号常量：直接用它的名字
    std::cout << FAT_BMI << std::endl;
    std::cout << "焦耳转卡路里需要除以：" << J2C_RATE << std::endl;

    return 0;
}

// 如何解决打印中文乱码的问题？
// 方式1：引入windows.h头文件，使用SetConsoleOutputCP(CP_UTF8)函数设置控制台输出为UTF-8编码
// 方式2：system("chcp 65001"); // 设置控制台输出为UTF-8编码