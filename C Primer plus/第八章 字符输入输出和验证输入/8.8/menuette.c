/* 菜单程序 */

#include <stdio.h>

char get_choice(void);
void count(void);

int main(void)
{
    int choice;
    
    while ((choice = get_choice()) != 'q')
    {
        /* code */
        switch (choice)
        {
        case 'a':
            printf("Buy now, sell high.\n");
            break;
        case 'b':
            putchar('\a'); // ANSI
            break;
        case 'c':
            count();
            break;
        default:
            printf("Program error!\n");
            break;
        }
    }
    
    return 0;
}


char get_choice(void)
{
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a.advice\t\t\tb.bell\n");
    printf("c.count\t\t\tq.quit");
    ch = getchar();
    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        /* code */
        printf("Please respon with a,b,c or q.\n");
        ch = getchar();
    }
    return ch;
    
}