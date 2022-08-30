// 3.编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考
//   虑闰年的问题。

#include <stdio.h>

int main()
{
	int age = 23;
	int days;
	days = 365*age;
	printf("I've lived %d days since I was born and I'm %d years old.", days, age);
	return 0;
}
