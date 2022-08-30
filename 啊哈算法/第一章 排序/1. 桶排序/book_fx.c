// book.c -- 处理数据范围在0~1000之间的整数排序
#include <stdio.h>

int main(void)
{   
    // 定义1001大小的整形数组book并初始化为0
    int book[1001] = {0};
    //定义整形变量i,j,t,n
    int i, j, t, n;

    // 输入一个数n,表示接下来有n个数
    printf("Please enter a inteager number which stand next will have n numbers: ");
    scanf("%d", &n);
    // 循环读入n个数，并进行桶排序
    printf("please enter %d numbers:\n", n);
    for ( i = 1; i <= n; i++)
    {
        // 把每一个数都读到变量t中
        scanf("%d", &t);
        // 进行计数，对编号为t的桶放入一个小旗子
        book[t]++;
    }

    // 依次判断编号1000~0的桶
    for ( i = 1000; i >= 0; i--)
    {
        // 出现几次就将桶的编号打印几次
        for ( j = 1; j <= book[i]; j++)
        {
            printf("%d ", i);
        }
        
    }
    
    getchar();
    getchar();
    return 0;
}