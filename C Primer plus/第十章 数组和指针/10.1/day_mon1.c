#include <stdio.h>

#define MONTHS 12

int main(void)
{
	int power[8] = {1, 2, 4, 6, 8, 16, 32, 64}; // 从ANSI开始支持这种初始化
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for ( index = 0; index < MONTHS; index++)
    {
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
    }
    
    return 0;
}