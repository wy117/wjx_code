// 通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、
// 浮点数上溢和浮点数下溢的情况。

#include <stdio.h>

int main()
{
    int bignum = 2147483647;
    printf("%d %d %d\n", bignum, bignum+1, bignum+2);
    // 2147483647 -2147483648 -2147483647
    // int类型的整数溢出后从-2147483648再重新开始计数

    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);
    // 1.#INF00e+000
    // 当计算结果导致数字过大上溢，C语言规定，在这种情况下会
    // 赋值给toobig一个表示无穷大的特定值
    // printf()显示该值为inf或infinity

    float toosmall = -3.4E38 * 100.0f;
    printf("%e\n", toosmall);
    // -1.#INF00e+000
    // 当计算结果导致数字过小下溢，C语言规定，在这种情况下会
    // 赋值给toosmall一个表示负无穷大的特定值
    // printf()显示该值为-inf或-infinity

    return 0;
}