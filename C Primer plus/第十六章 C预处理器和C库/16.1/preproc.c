/* preproc.c -- 简单的预处理示例 */
#include <stdio.h>
#define TWO 2 
// 预处理从#开始到后面第一个换行符为止
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde"

#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x = TWO;
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");

    return 0;
}