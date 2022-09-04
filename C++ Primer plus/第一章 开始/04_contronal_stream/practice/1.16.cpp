#include <iostream>
int main(int argc, char const *argv[])
{
    int sum =0, value = 0;
    std::cout << "Enter a array of numbers:" << std::endl;
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
