// 第二章 26 goto语句

// continue和break有条件跳转
// goto语句是无条件跳转

// 语法：
// 标签名:
// goto 标签名;

// goto慎重使用或者压根不用

#include <iostream>

int main(){
    
    a:
    std::cout<<"a"<<std::endl;

    b:
    std::cout<<"b"<<std::endl;

    // goto a; // 无条件跳转到a标签处
    // goto b; // 无条件跳转到b标签处
    // goto c; // 无条件跳转到c标签处
    goto d; // 无条件跳转到d标签处

    c:
    std::cout<<"c"<<std::endl;

    d:
    std::cout<<"d"<<std::endl;



    // goto实现for循环
    int i = 1;
    loop:
    std::cout << i << std::endl;
    i++;
    if(i <= 10){
        goto loop;
    }



    return 0;
}

