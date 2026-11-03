// 第三章 03 数组的遍历

// 对数组进行遍历（依次取出元素），可以使用while或for循环完成


#include <iostream>

int main(){
    
    int arr[] = {00, 11, 22, 33, 44, 55};

    // ———— while ————
    int i = 0;
    while (i < sizeof(arr)/sizeof(arr[0])){
        std::cout << "while:" << arr[i] << std::endl;
        i++;
    }

    // ———— for ————
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        std::cout << "for:" << arr[i] << std::endl;
    
    }

    // ———— for 高级写法————
    for (int element:arr){
        std::cout << "for(gaoji):" << element << std::endl;
    }

    return 0;
}