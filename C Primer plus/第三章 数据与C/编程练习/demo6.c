// 1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。
// 编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。

#include <stdio.h>
int main(void)
{
    signed waters;
    printf("请输入水的夸脱数: ");
    scanf("%d", &waters);
    printf("一共有：%f水分子\n", 950*waters/3.0e-23);
    return 0;
    
}