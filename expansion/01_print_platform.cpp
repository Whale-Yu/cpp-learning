#include <iostream>

// 仅在 Windows 平台下引入相关头文件
#ifdef _WIN32
    #include <windows.h>
#endif

void printPlatform() {
#if defined(_WIN32) || defined(_WIN64)
// #ifdef _WIN32 || _WIN64  // 简写
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "运行平台: Windows" << std::endl;

#elif defined(__linux__)
    std::cout << "运行平台: Linux" << std::endl;

#elif defined(__APPLE__) || defined(__MACH__)
    #include <TargetConditionals.h>
    #if TARGET_OS_IPHONE
        std::cout << "运行平台: iOS" << std::endl;
    #elif TARGET_OS_MAC
        std::cout << "运行平台: macOS" << std::endl;
    #endif

#elif defined(__ANDROID__)
    std::cout << "运行平台: Android" << std::endl;

#elif defined(__FreeBSD__)
    std::cout << "运行平台: FreeBSD" << std::endl;
#else
    std::cout << "运行平台: 未知系统" << std::endl;
#endif
}

int main() {
    printPlatform();
    return 0;
}