// 第二章 20 for循环语句

// 语法：
// for (初始化表达式; 条件表达式; 更新表达式) {
//     循环体语句;
// }

// 示例代码：
// int num = 0;
// for (int i = 0; i < 10; i++) {
//     num++;
// } 

#include <iostream>

int main(){

    // 1、基础for循环：打印1-10的数字
    for (int num = 1; num <= 10; num++){
        std::cout << num << std::endl;
    }
    std::cout << "------------------------" << std::endl;

    // 2、打印1-20之间的基数
    for (int i = 1; i<=20; i+=2){
        std::cout << i << std::endl;
    }
    std::cout << "------------------------" << std::endl;

    return 0;


}