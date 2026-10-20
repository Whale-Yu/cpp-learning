// 第二章 21 for循环的嵌套

// 通过for循环实现99乘法表的输出

#include <iostream>

int main() {
    // 99乘法表
    // 1、对行的控制
    for (int line = 1; line <= 9; line++) {
        // 2、对列的控制
        for (int j = 1; j <= line; j++) {
            std::cout << j << "*" << line << "=" << line * j << " ";
        }
        // 换行
        std::cout << std::endl;
    }

    return 0;
}
