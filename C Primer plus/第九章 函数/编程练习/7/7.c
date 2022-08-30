// 编写一个函数，从标准输入中读取字符，直到遇到文件结尾。
// 程序要报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位置。
// 例如，c和C在字母表中的位置都是3
// 合并一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回-1。
#include <stdio.h>

int read_char(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            /* code */
            if (ch >= 65 && ch <= 90)
            {
                printf("%c at %d\n", ch, ch - 64);
            }
            if (ch >= 97 && ch <= 122)
            {
                printf("%c at %d\n", ch, ch - 96);
            }
            return (int)ch;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    read_char();
    return 0;
}