// tub_sort.c -- 最简单和最快的排序
#include <stdio.h>
int main(void)
{
    // 定义一个大小为11的整形数组，定义整形变量i,j,t
    int a[11];
    int i, j, t;
    // 将数组a初始化为0
    for ( i = 0; i <= 10; i++)
    {
        /* code */
        a[i] = 0; 
    }
    
    // 循环读入5个数
    for ( i = 1; i <= 5; i++)
    {
        // 把每一个数读到变量t中
        scanf("%d", &t); 
        a[t]++; // 进行计数
    }
    
    // 依次判断a[0]~a[10]
    for ( i = 10; i >= 0; i--)
    {
        // 出现了几次就打印几次
        for ( j = 1; j <= a[i]; j++)
        {
            printf("%d ", i);
        }
    }

    // 这里的getchar()用来暂停程序，以便查看程序输出的内容
    // 也可以用system("pause");来代替
    getchar();
    getchar();
    return 0;
}