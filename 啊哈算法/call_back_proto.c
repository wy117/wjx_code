// call_back_proto.c -- 使用带参数的回调函数
#include <stdio.h>

int Callback_1(int x)
{
    printf("Hello, this is Callback_1: x = %d\n", x);
    return 0;
}

int Callback_2(int y)
{
        printf("Hello, this is Callback_2: y = %d\n", y);
    return 0;
}

int Callback_3(int z)
{
        printf("Hello, this is Callback_3: z = %d\n", z);
    return 0;
}


int Handle(int y, int (*Callback)(int))
{
    printf("Entering Handle Function. ");
    Callback(y);
    printf("Leaving Handle Function. ");
}

int main()
{
    int a = 2;
    int b = 4;
    int c = 6;
    printf("Entering Main Function. ");
    Handle(a, Callback_1);
    Handle(b, Callback_2);
    Handle(c, Callback_3);
    printf("Leaving Main Function. ");
    return 0;
}