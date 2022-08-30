// 编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。

#include <stdio.h>
int main(void)
{
    char puchar;
    printf("Please input a ASCLL:");
    scanf("%d", &puchar);

    printf("puchar=%c\n", puchar);
}