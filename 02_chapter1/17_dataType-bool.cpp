// 第一章 17 字符串的拼接

// 布尔数据类型 bool
// true = 1 = 真
// false = 0 = 假

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // 布尔:bool 字面量只有2个:true或false
    bool flag = true;
    bool flag2 = false;

    std::cout << flag << std::endl;
    std::cout << flag2 << std::endl;




    return 0;

}
