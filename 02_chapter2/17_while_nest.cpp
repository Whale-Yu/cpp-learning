// 第二章 17 while循环嵌套

// 语法：
// while(条件表达式){
//     循环体语句;

//      while(条件表达式){
//          循环体语句;
// }




#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
#include <random> // 引入随机数生成器头文件


int getRandomNumber(int min, int max) {
    // 创建一个随机数生成器 （一定要加std::或者顶部加上std命名空间）
    std::random_device rd; // 获取随机数种子
    std::mt19937 gen(rd()); // 使用Mersenne Twister算法生成随机数

    // 定义一个均匀分布的整数范围
    std::uniform_int_distribution<> dis(min, max);

    // 生成一个随机数并输出
    int randomNum = dis(gen);

    return randomNum;
}


int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    bool is_continue = true;
    while (is_continue){
        std::cout << "今天又是新的一天，开始向小美表白" << std::endl;

        // 每一天表白的流程，每一次都送三朵玫瑰花
        int roses = 3;
        while (roses > 0){
            std::cout << "送出一朵玫瑰花" << std::endl;
            roses--;
        }

        std::cout << "小美，我喜欢你" << std::endl;
        
        int num = getRandomNumber(1, 20); // 生成1-20的随机整数
        if (num == 1){ // 模拟5%的概率小美会答应
            std::cout << "小美答应了" << std::endl;
            is_continue = false; // 结束循环
        } else {
            std::cout << "小美拒绝了" << std::endl;
        }
    }

    return 0;
}
