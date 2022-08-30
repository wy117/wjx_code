// glue.c -- 使用## 运算符
#include <stdio.h>
// 与#运算符类似，##运算符可用于类函数宏的替换部分，并且还可用于对象宏的替换部分
#define XNAME(n) x ## n
// PRINT_XN宏用#运算符组合字符串 ##运算符把记号组合为一个新的标识符
#define PRINT_XN(n) printf("x" #n " =%d\n", x ## n)

int main(void)
{
    int XNAME(1) = 14; // 变成 int x1 = 14;
    int XNAME(2) = 20; // 变成 int x2 = 20;
    int x3 = 30;
    PRINT_XN(1); // 变成 printf("x2 = %d\n", x1)
    PRINT_XN(2);
    PRINT_XN(3);

    return 0;
}