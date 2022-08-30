// predef.c -- 预定义宏和预定义标识符
#include <stdio.h>

void why_me();

int main(void)
{
    printf("The file is %s.\n", __FILE__); // 表示当前源代码文件名的字符串字面量
    printf("The date is %s.\n", __DATE__); // 表示预处理的日期（Jul 28 2022）
    printf("The time is %s.\n", __TIME__); // 翻译代码的时间 （09:27:18）
    printf("The version is %ld.\n", __STDC_VERSION__); // 编译器版本
    printf("This is line %d.\n", __LINE__); // 当前语句所在源代码中行号的整形变量
    printf("This function is %s\n", __func__); // 代表当前所在函数的函数名字符串
    why_me();
    return 0;
}


void why_me()
{
    printf("This function is %s\n", __func__);
    printf("This is line %d", __LINE__);
}