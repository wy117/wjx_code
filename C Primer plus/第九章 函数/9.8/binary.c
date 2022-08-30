// binary.c -- 以二进制的形式打印十进制整数
// 5    =    101                                8        =       1000
// 以二进制显示                         
// 2    5                                          2      8
// 2    2    ... 1                                2      4   ...  0
// 2    1    ... 0                                2      2   ...  0
//        0   ... 1                                 2      1  ...  0
//                                                             0  ...  1

// 5 / 2   = 1  最后一位
#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}

void to_binary(unsigned long n) // 递归函数
{
    int r;

    r = n % 2;
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
    return;
}