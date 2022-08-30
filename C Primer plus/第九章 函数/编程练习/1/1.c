// 设计一个函数min(x, y)，返回两个double类型值的较小值。在一个简单的驱动程序中测试该函数。
#include <stdio.h>

int min(int x, int y)
{
    return (x < y) ? x : y;
}

int main(void)
{
    int a = 3;
    int b = 8;
    printf("a and b who is the miner:%d", min(a, b));
    return 0;
}
