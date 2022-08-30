// defines.c -- 使用limit.h和float.h头文件中定义的明示常量

#include <stdio.h>
#include <limits.h> // 整型限制
#include <float.h> // 浮点型限制
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);  // float类型的最小有效数字位数（十进制）
    printf("float epsilon = %e\n", FLT_EPSILON); // 1.00 和比 1.00大的最小float类型值之间的差值 （步长）
    return 0;
}