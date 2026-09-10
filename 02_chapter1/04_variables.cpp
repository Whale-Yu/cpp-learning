/*
 * @Author: Whale-Yu 2933582448@qq.com
 * @Date: 2026-09-10 22:38:20
 * @LastEditors: Whale-Yu 2933582448@qq.com
 * @LastEditTime: 2026-09-10 23:00:47
 * @FilePath: /Learning_260908_cpp-learning/cpp-learning/02_chapter1/04_variables.cpp
 * @Description: 
 * 
 * Copyright (c) 2026 by 余俊瑜, All Rights Reserved. 
 */
// 第一章 04-变量的基础使用

// 变量：在程序运行时，记录数据用的

// 变量的定义和赋值：变量类型 变量名 = 初始值;

// 变量类型：int整型 float浮点型 double双精度浮点型 char字符型 std::string字符串 bool布尔型

// 示例：int num = 10; // 定义一个整型变量num，并赋值为10


#include <iostream>
#include <windows.h>

// using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    int age = 21;

    float height = 1.75;

    char gender = 'M';

    std::string name = "张三";


    std::cout << name << "的年龄: " << age << std::endl;
    std::cout << name << "的身高: " << height << std::endl;
    std::cout << name << "的性别: " << gender << std::endl;


    return 0;
}
