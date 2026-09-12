// 第一章 15 数据类型-字符串

// 在c++中有两种风格的字符串使用形式：
// C语言（了解）：char a[] = "ithema"; char *b = "itheima";
// C++：string c = "c++"; 

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // c语言风格字符串
    char s1[] = "itheima";      //字符数组的形式
    char *s2 = "itcast";       //指针的形式

    // c++语言风格的字符串
    std::string s3 = "c++ string";

    // 赋值修改
    // s1 = "666"; // 不可更改变量值，只读
    s2 = "777";
    s3 = "888";

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;


    return 0;

}