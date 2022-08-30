#include <stdio.h>
#include <time.h>
int main(void)
{
    time_t seconds;
    seconds = time(0);
    printf("%ld\n", seconds/3600);
    return 0;
}