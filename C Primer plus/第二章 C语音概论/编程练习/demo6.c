/*
	6.编写一个程序，创建一个整型变量toes，并将toes设置为10。程序中还
    要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区
    分。
*/

#include <stdio.h>
int main()
{
	int toes=10;
	printf("toes=%d\ntoes的双倍=%d\ntoes的平方=%d", toes, 2*toes, toes*toes*toes);
	return 0;
}