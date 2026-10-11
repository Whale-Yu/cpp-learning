#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int addByValue(int a, int b) {
    std::cout << "【值传递形参】a地址: " << &a << ", b地址: " << &b << std::endl;
    a = 100;
    return a + b;
}

int addByRef(int& a, int& b) {
    std::cout << "【引用传递形参】a地址: " << &a << ", b地址: " << &b << std::endl;
    a = 100;
    return a + b;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int x = 5, y = 10;

    std::cout << "实参x地址: " << &x << ", y地址: " << &y << std::endl << std::endl;

    addByValue(x, y);
    std::cout << "调用后实参x=" << x << std::endl << std::endl;

    addByRef(x, y);
    std::cout << "调用后实参x=" << x << std::endl;

    return 0;
}