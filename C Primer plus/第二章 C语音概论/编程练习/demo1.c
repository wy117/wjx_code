/*
	编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。
	再调用一次printf()函数，把你的名和姓分别打印在两行。
	然后，再调用两次printf()函数，把你的名和姓打印在一行。
	输出应如下所示（当然要把示例的内容换成你的名字）：
	Gustav Mahler     <- 第1次打印的内容
	Gustav            <- 第2次打印的内容
	Mahler            <- 仍是第2次打印的内容
	Gustav Mahler     <- 第3次和第4次打印的内容
*/

#include <stdio.h>
int main()
{
	printf("Wang Meng\n");
	printf("Wang\n");
	printf("Meng\n");
	printf("Wang");
	printf(" Meng");
	return  0;
}