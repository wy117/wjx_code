// 8.编写一个函数，返回3个整数参数的最大值
// 原答案：
int max_three_int(int a, int b, int c)
{
    return ((a > b ? a : b) > c ? (a > b ? a : b) : c);
}

// 参考答案:
int largest(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}