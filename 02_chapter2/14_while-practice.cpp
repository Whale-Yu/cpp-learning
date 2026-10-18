// 通过while循环，计算从1加到100的和

#include <iostream>


int main()
{
    int sum = 0; //累加器
    int num = 1; //控制变量
    while (num <= 100){
        sum += num;
        num++;
    }
    std::cout << "sum = " << sum << std::endl;

    return 0;
}