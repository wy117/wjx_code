// fibonacci.c -- 输出斐波那契数列
#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main(void)
{
    unsigned num;
    printf("Please a integer (q to quit)\n");
    while (scanf("%u", &num) == 1)
    {
        /* code */
        printf("The fabonacci is:\n");
        // Fibonacci(num);
        printf("%u\n", Fibonacci(num));
        printf("Please a integer (q to quit)\n");
    }
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    if(n > 2)
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    else 
    {
        return 1;
    }
}