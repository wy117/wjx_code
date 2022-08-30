// hiding.c -- 块中的变量
#include <stdio.h>

int main(void)
{
    int x = 30; // 原始X

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77; // 新的x，隐蔽了原始的x
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33)   // 原始的x
    {
        /* code */
        int x = 100; // 新的x，隐藏了原始的x
        x++;
        printf("\tx in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}