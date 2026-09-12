// 第一章 22 运算符-比较运算符(关系运算符)

// 比较运算符:是一种双目运算符,用于对两个数据进行比较,得到bool型的结果
// ==   !+  <   >   <=  >=
// 可用于对数字的比较,针对字符串的比较需要特定操作

// c++中支持2中风格的字符串
// 1.c语言风格:char s[] ="hello"; / char *s = "hello";
//  需要使用c语言函数strcmp比较:
//  #include "cstring"
//  int result strcmp(s1,s2);

// 2.c++风格: std::string s = "hello";
// 如果对比的两个字符串至少有1个是string类型,可以使用运算符比较
// c++对string类型参与的运算符进行了重载,确保可以进行内容对比

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

    // ==   !=
    int num1 = 3;
    int num2 = 5;
    bool r1 = num1 == num2;
    bool r2 = num1 != num2;
    std::cout << "num1 == num2: " << r1 << std::endl;  
    std::cout << "num1 != num2: " << r2 << std::endl;  

    // <   >   <=  >=
    std::cout << "3 < 5: " << (3 < 5 ) << std::endl; 
    std::cout << "3 > 5: " << (3 > 5 ) << std::endl; 
    std::cout << "3 <= 5: " << (3 <= 5 ) << std::endl; 
    std::cout << "3 >= 5: " << (3 >= 5 ) << std::endl; 

    // 字符串的比较
    // ##### c语言风格 char s[]/char *s ####
    char s1[] = "hello"; 
    char *s2 = "hello";
    std::cout << "s1 == s2(==比较): " << (s1 == s2 ) << std::endl; 
    // 输出为0 :直接应用比较运算符,比较的内存地址,而不是内容

    // strcmp()进行比较:0表示相等, -1表示小于,1表示大于
    std::cout << "s1 == s2(strcmp()比较): " << strcmp(s1,s2) << std::endl; 
    // 输出0:表示相等

    char s3[] = "a"; 
    char *s4 = "b";
    std::cout << "s3 和 s4的比较结果:(strcmp()比较): " << strcmp(s3,s4) << std::endl; 
    // 输出-1:表示s3<s4

    std::cout << "字符字面量c是否大于a:(strcmp()比较): " << strcmp("c","a") << std::endl; 
    // 输出1:表示字面量c大于a

    // ##### c++风格 std::string ####
    std::string s5 = "a";
    char s6[] = "a";
    std::cout << "s5(c++风格)是都等于s6(c风格): " << (s5 == s6 ) << std::endl; 
    // 输出1 相等

    // 内容和地址









    return 0;

}