// 第三章 02 数组的特点

// ##### 特点1：任意类型均可构建数组 #####
// - 基本数据类型：int、float、double、char、string、bool等
// - 复合数据类型：结构体、联合体等
// - 指针类型：int*、char*、float*等
// - 枚举类型：enum
// float v1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
// double v2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
// char v3[] = {'a', 'b', 1, 2, 3};
// string v4[] = {"宇峻宇", "与君与", "与君与"};
// bool v5[] = {0, 1, true, false};
// enum Color {RED, GREEN, BLUE};
// Color colors[] = {RED, GREEN, BLUE, GREEN, BLUE};

// ##### 特点2：固定大小（无边界检查） #####
// c++数组一旦定义完成，其大小（长度）即固定

// ##### 特点3：内存连续且有序 #####
// 数组元素个数/长度 = sizeof(数组)/sizeof(数组某元素）

// ##### 特点4：元素值可以修改 #####

// ##### 特点5：数组变量不记录数据 #####
// int v[] = {1,2,3,4};
// 数组变量v本身，不存数据，而是记录了v[0]元素的内存地址

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // ———— 特点1：任意类型均可构建数组 ————
    std::cout << "特点1：任意类型均可构建数组" << std::endl;
    float v1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double v2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char v3[] = {'a', 'b', 1, 2, 3};
    std::string v4[] = {"宇峻宇", "与君与", "与君与"};
    bool v5[] = {0, 1, true, false};
    enum Color {RED, GREEN, BLUE};
    Color colors[] = {RED, GREEN, BLUE, GREEN, BLUE};

    std::cout << "float数组的第一个元素：" << v1[0] << std::endl;
    std::cout << "double数组的第一个元素：" << v2[0] << std::endl;
    std::cout << "char数组的第一个元素：" << v3[0] << std::endl;
    std::cout << "string数组的第一个元素：" << v4[0] << std::endl;
    std::cout << "bool数组的第一个元素：" << v5[0] << std::endl;
    std::cout << "enum数组的第一个元素：" << colors[0] << std::endl;
    std::cout << std::endl;

    // ———— 特点2：固定大小（无边界检查）————
    std::cout << "特点2：固定大小（无边界检查）" << std::endl;
    int v7[] ={1, 2, 3, 4, 5};
    // std::cout << "访问v7数组的10号下标：" << v7[10] << std::endl;
    // 取到了2
    // 不会报错，但有些场景会有影响！！！一定要注意
    std::cout << std::endl;


    // ———— 特点3：内存连续且有序 ————
    // 数组元素个数/长度 = sizeof(数组)/sizeof(数组某元素）
    std::cout << "特点3：内存连续且有序" << std::endl;
    std::cout << "v7的0号元素是：" << v7[0] << std::endl;
    std::cout << "v7的0号元素是：" << v7[0] << std::endl;
    std::cout << "v7的0号元素是：" << v7[0] << std::endl;

    std::cout << "v7数组空间占用大小 " << sizeof(v7) << " 字节" << std::endl;
    std::cout << "v7数组第一个元素空间占用大小 " << sizeof(v7[0]) << " 字节" << std::endl;
    std::cout << "v7数组个数/长度：" << sizeof(v7)/sizeof(v7[0]) << std::endl;

    std::cout << std::endl;

    // ———— 特点4：元素值可以修改 ————
    int v8[] ={1, 2, 3, 4, 5};
    std::cout << "【原始】v8下标0的元素值：" << v8[0] << std::endl;
    std::cout << "【原始】v8下标1的元素值：" << v8[1] << std::endl;
    v8[0] = 11;
    v8[1] = 66;
    std::cout << "【修改后】v8下标0的元素值：" << v8[0] << std::endl;
    std::cout << "【修改后】v8下标1的元素值：" << v8[1] << std::endl;
    std::cout << std::endl;

    // ———— 特点5：数组变量不记录数据 ————
    int v9[] ={1, 2, 3, 4, 5};
    // v9变量=v9[0]的元素的内存地址
    std::cout << v9 << std::endl;
    

}