#include <stdio.h>

int main(void)
{

    char a = 0x01;
    int b = 0x02;
    printf("a: %p\nb: %p", &a, &b);
    return 0;
}