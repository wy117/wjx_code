// 1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。

#include <stdio.h>
int main(void)
{
    char length;
    printf("请输入你的身高(/英寸):");
    scanf("%d", &length);
    printf("你的身高是%.2f厘米", 2.54*length);
    return 0;
}