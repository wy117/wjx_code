// 编写并测试一个函数，该函数以3个double变量的地址作为参数
// 把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。

void order(double *a, double *b, double *c)
{
    int temp1, temp2, temp3;
    temp1 = *a;
    temp2 = *b;
    temp3 = *c;
    if (temp1 > temp2)
    {
        if (temp2 > temp3)
        {
            /* code */
            *c = temp1;
            *b = temp2;
            *a = temp3;
        }
        else
        {
            if (temp1 > temp3)
            {
                *c = temp1;
                *b = temp3;
                *a = temp2;
            }
            else
            {
                *c = temp3;
                *b = temp1;
                *a = temp2;
            }
        }
    }
    else
    {
        if (temp1 > temp3)
        {
            *c = temp2;
            *b = temp1;
            *a = temp3;
        }
        else
        {
            if (temp2 > temp3)
            {
                *c = temp2;
                *b = temp3;
                *a = temp1;
            }
            else
            {
                *c = temp3;
                *b = temp2;
                *a = temp1;
            }
        }
    }
}