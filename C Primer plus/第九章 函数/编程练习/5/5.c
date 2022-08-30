// 编写并测试一个函数larger_of()
// 该函数把两个double类型变量的值替换为较大的值
// 例如，larger_of(x, y)会把x和y中较大的值重新赋给两个变量
#include <stdio.h>
void larger_of(double * x, double * y)
{
    if (*x > *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}



int main(void)
{
    double a = 3.778;
    double b = 9.981;
    larger_of(&a, &b);
    printf("%f and %f", a, b);
    return 0;
}