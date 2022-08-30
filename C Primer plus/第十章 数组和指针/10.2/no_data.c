// no_data.c -- 为初始化数组
#include <stdio.h>
#define SIZE 4
int main(void)
{
    // 如果不初始化数组，数组元素和未初始化的普通变量一样，其中存储的都是垃圾值
    int no_data[SIZE]; // 未初始化数组
    int i;
    // %s 输出全部字符串
    // %ms 输出的字符串共占m列，若字符串本身的长度小于m,则左补空格，若字符串的本身的长度大于m，则全部输出
    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }

    return 0;
}