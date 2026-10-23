// 第二章 23 变量的作用域

// 在c++代码中，变量并不是随时、随处可以访问的，而是要看作用域
// {.. ...} 称之为代码块,也是内部变量的作用域
// 在{... ...}内部声明的变量,可以在{}内任何地方被访问,但在{}之外无法被访问到



#include <iostream>

int main(){
    // int num1 = 10;

    // if (1){
    //     int num2 = 20;
    //     num1 += 1;
    // }

    // std::cout << "num1 = " << num1 << std::endl;
    // std::cout << "num2 = " << num2 << std::endl; // 这里会报错,因为num2的作用域只在if语句块内

    
    // i的作用域为 for循环的代码块内,在for循环外无法访问
    // for (int i = 0; i < 10; i++){
        // std::cout << "i = " << i << std::endl;
    // }

    // i的作用域为 main函数的代码块内,在for循环外也可以访问
    int i = 0;
    for (i = 0; i < 10; i++){
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}