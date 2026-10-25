// 第三章 01 数组的定义

// 数组是一批`相同类型的元素`的`集合`所组成的数据结构

// 语法：<数据类型> <数据名> [<数组长度>]
// int v[6];

#include <iostream>

int main(){
    // 先声明后赋值
    int v[5];

    v[0] = 11;
    v[1] = 22;
    v[2] = 33;
    v[3] = 44;
    v[4] = 55;

    std::cout << v[0] << std::endl;
    std::cout << v[1] << std::endl;
    std::cout << v[2] << std::endl;
    std::cout << v[3] << std::endl;
    std::cout << v[4] << std::endl;

    // 声明、赋值同步
    // 数组类型 数组名[] = {元素1,元素2,...元素n};
    // 长度可以省略
    int v2[] ={111,222,333,444,555};
    std::cout << v2[0] << std::endl;
    std::cout << v2[1] << std::endl;
    std::cout << v2[2] << std::endl;
    std::cout << v2[3] << std::endl;
    std::cout << v2[4] << std::endl;


    return 0;
}