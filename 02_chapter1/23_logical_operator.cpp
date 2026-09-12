// 第一章 23 运算符-逻辑运算符

// 逻辑运算符:是一种单/双目运算符,用于对单个或多个表达式进行逻辑判断
// !: 非; !a 如果a为假,则!a为真;如果a为真,则!a为假;
// &&:与; a&&b 如果a和b都为真,则为真,否则为假      (全1为1,有0则0)
// ||:或; a||b 如果a和b有一个为真,则结果为真,两者都为假,则为假      (有1为1,全0为0)


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

    // 非 !
    bool b1 = !(1==1);
    bool b2 = !(1==2);
    std::cout <<  b1 << std::endl;  
    std::cout <<  b2 << std::endl;  

    // 与 &&
    bool b3 = 1==1 && 2==2;
    bool b4 = 1==2 && 2==2;
    std::cout <<  b3 << std::endl;  
    std::cout <<  b4 << std::endl;  

    // 或 ||
    bool b5 = 1==1 || 1==2;
    bool b6 = 1==2 || 1==2;
    std::cout <<  b3 << std::endl;  
    std::cout <<  b4 << std::endl;  



    return 0;

}