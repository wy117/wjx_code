#include <stdio.h>

int mian(void)
{
#if __STDC_VERSION__ != 201112l
#error Not C11

#endif
    return 0;
}