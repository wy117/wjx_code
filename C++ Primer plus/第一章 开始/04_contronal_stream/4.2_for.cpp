#include <iostream>
int main(int argc, char const *argv[])
{
    int sum = 0;
    // 从1加到10
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
