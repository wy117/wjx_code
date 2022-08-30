// hotel.c -- 酒店管理函数
#include <stdio.h>
#include "hotel.h"


int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfiled Arms\t\t\t2) Hotel olympic\n");
    printf("3) Chertworthy Plaza\t\t\t4) The Stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
        {
            // scanf("%s")是读入一个字符串以空格结束
            // scanf("%*s")跳至下一个空白字符，*的作用是表示读入字符串的宽度，没有具体的数字表明了需要读入的字符串的宽度是不确定的
            // scanf("%*s")表示输入的以空格符结的字符串不传入任何变量
            scanf("%*s");  // 处理非整数输入
        }
        printf("Enter an integer from 1 to 5, please.\n");
    }
    return code;
}


int getnights(void)
{
    int nights;
    printf("How many nights are needed?");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s"); // 处理非整数输入
        printf("Please enter an integer, such as 2.\n");
    }
    return nights;
}


void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;
    for ( n = 1; n < nights; n++, factor *= DISCOUNT)
    {
        /* code */
        total += rate * factor;
    }
    printf("The total cost will be $%0.2f.\n", total);
}