// 设计一个函数chline(ch, i, j)，打印指定的字符j行i列。
// 在一个简单的驱动程序中测试该函数。
#include <stdio.h>
void chline(char ch, int i, int j)
{
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < i; y++)
        {
            /* code */
            printf("%c", ch);
        }
        putchar('\n');
    }
    
}

int main(void)
{
    chline('*', 3, 4);
    return 0;
}