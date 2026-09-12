// cout：打印输出

#include <iostream>

int main() {
    // 单份内容：字符串
    std::cout << "I love c++" << std::endl; //endl=end line=换行

    // 单份内容：数字【无需双引号包围】
    std::cout << 520 << std::endl;

    
    // 多份内容：cout << xxx << xxx << xxx << std::endl;
    std::cout << "i am 10" << "years old." << std::endl;

    std::cout << "c++ " << "is the best " << "programming language" << std::endl;

    return 0;
}