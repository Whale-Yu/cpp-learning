// 第三章 07 多维数组的遍历

// 基本要素：
// 1、会有多层嵌套循环
// 2、每一层循环对应一个维度
// 3、一般for循环更方便


#include <iostream>

int main(){

    // 遍历二维数组
    int v1[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < sizeof(v1)/sizeof(v1[0]); i++){
        for (int j = 0; j < sizeof(v1[0])/sizeof(v1[0][0]); j++){
            std::cout << v1[i][j] << std::endl;
        }
    }

    // 遍历三维数组
    int v2[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    for (int i = 0; i < sizeof(v2)/sizeof(v2[0]); i++){
        for (int j = 0; j < sizeof(v2[0])/sizeof(v2[0][0]); j++){
            for (int k = 0; k < sizeof(v2[0][0])/sizeof(v2[0][0][0]); k++){
                std::cout << v2[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}