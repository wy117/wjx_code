/* showchar1.c -- 有较大I/O问题的程序 */
#include <stdio.h>
void display(char cr, int lines, int width);

int main(void)
{
    int ch;   // 待打印字符
    int rows, cols; // 行数和列数
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        /* code */
        if (scanf("%d %d", &rows, &cols) != 2) // 该函数返回成功匹配和赋值的个数。如果到达文件末尾或发生读错误，则返回 EOF
        {
            /* code */
            break;
        }
        display(ch, rows, cols);
        while (getchar() != '\n')
        {
            /* code */
            continue;
        }
        
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }

    printf("Bye.\n");
    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;
    for ( row = 1; row <= lines; row++)
    {
        /* code */
        for (col = 1; col <= width; col++)
        {
            /* code */
            putchar(cr);

        }
        putchar('\n'); // 结束一行并开始新的一行
    }
    
}