// 6.设计一个名为alter()的函数，接受两个int 类型的变量x和y，
// 把它们的值分别改成两个变量之和以及两变量之差
// 原答案:
void alter(int * x, int * y)
{
    int temp;
    temp = *x;
    *x = temp + *y;
    y = temp - *y;
}

// 参考答案:
void alter(int * pa, int * pb)
{
    int temp;
    temp = *pa + *pb;
    *pb = *pa - *pb;
    *pa = temp;
}
// 或者
void alter (int * pa, int * pb)
{
    *pa += *pb;
    *pb = *pa - 2 * *pb;
}