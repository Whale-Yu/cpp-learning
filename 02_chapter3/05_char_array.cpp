// 第三章 05 字符数组

// "hello";
// char s[] = "hello";

// 以上两种本质都是：字符数组
// 均可表现为：char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};

// 为什么有 '\0' ？
// 因为 C++ 语言中，字符串是以 '\0' 结尾，作为结束标记



#include <iostream>

int main(){

    char s[] = "hello";
    std::cout << s[0] << std::endl;
    std::cout << s[1] << std::endl;
    std::cout << s[2] << std::endl;
    std::cout << s[3] << std::endl;
    std::cout << s[4] << std::endl;

    std::cout << sizeof(s) << std::endl; // 6


    for (char i: s){
        std::cout << i << std::endl;
    }

    return 0;
}