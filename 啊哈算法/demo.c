#include <stdio.h>

typedef signed long int int32;
int main(void)
{
    int32 a = 51;
    int b = 0xFF00;
    printf("%x\n%x\n", (int32)b, (int32)~b);
    return 0;
}