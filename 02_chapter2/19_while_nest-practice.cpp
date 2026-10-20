/*
通过while，输出如下99乘法表：
*/

#include <iostream>

int main() {
    // 1、通过外层循环输出9行
    int line = 1;
    while (line <= 9) {

        // 2、通过内层循环输出每一行的内容
        int num = 1;
        while (num <= line) {
            std::cout << num << " * " << line << " = " << line * num << "\t";
            num++;
        }
        std::cout << std::endl;
        line++;
    }
    return 0;
}