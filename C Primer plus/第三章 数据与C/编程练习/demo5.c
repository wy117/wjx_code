// 一年大约有3.156×107秒。
// 编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
#include <stdio.h>
int main(void)
{
    char age;
    printf("Please input your age: ");
    scanf("%d", &age);
    printf("You have live %.2f s.", age*3.156e7);
    return 0;
}