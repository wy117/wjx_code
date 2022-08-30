#include <stdio.h>

int main(void)
{

    printf("This is line %d.\n", __LINE__);
    printf("The file is %s.\n", __FILE__);
    #line 1000 "cool.c"
    printf("This is line %d.\n", __LINE__);
    printf("The file is %s.\n", __FILE__);
    /* This is line 6.
       The file is line.c.
       This is line 1000.
       The file is cool.c. */

    return 0;
}