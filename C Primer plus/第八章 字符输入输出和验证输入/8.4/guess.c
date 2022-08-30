// guess.c -- 一个拖沓且错误的猜数字程序
#include <stdio.h>

int main(void)
{
    int guess = 1;
    char response;
    printf("Pick an integer from 1 to 100. I will to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        /* code */
        if (response == 'n')
        {
            /* code */
            printf("Well, then, is it %d?\n", ++guess);
        }
        else
        {
            printf("Sorry, I understand only y or n.\n");
        }
        // 程序读取n作为用户否定了数字1，然后还读取了一个换行符作为用户否定了数字2
        // 解决方案1
        while (getchar() != '\n')
        {
            /* code */
            continue;
        }
    }
    printf("I knew I could do it!\n");
    return 0;
}