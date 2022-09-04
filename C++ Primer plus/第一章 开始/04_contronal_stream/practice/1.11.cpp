// 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
#include <iostream>
int main(int argc, char const *argv[])
{
    int a1, a2;
    std::cout << "Enter two number:" << std::endl;
    std::cin >> a1 >> a2;
    while (a1 >= a2)
    {
        std::cout << a1 << std::endl;
        --a1; 
    }
    // while (a1 <= a2)
    // {
    //     std::cout << a2 << std::endl;
    //     --a2; 
    // }
    
    return 0;
}
