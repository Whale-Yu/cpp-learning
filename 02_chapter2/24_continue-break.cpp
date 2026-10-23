// 第二章 24 循环中断语句continue和break

// continue:跳过本次循环,进入下一次
// break:直接结束所在循环

#include <iostream>

int main(){
    
    for(int i=0;i<10;i++){
        if(i==5){
            continue; // 跳过本次循环,进入下一次
        }
        std::cout<<i<<std::endl;
    }

    std::cout<<"--------------------"<<std::endl;

    for(int i=0;i<10;i++){
        if(i==5){
            break; // 直接结束所在循环
        }
        std::cout<<i<<std::endl;
    }

    return 0;
}