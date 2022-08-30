// addresses.c -- 字符串的地址
#define MSG "I'M special"

#include <stdio.h>
int main()
{
	char ar[] = MSG;
	const char *pt = MSG;
	printf("address of \"I'm special\": %p\n", "I'm special");
	printf("adBdress ar: %p\n", ar);
	printf("address pt: %p\n", pt);
	printf("address of MSG: %p\n", MSG);
	printf("address of \"I'm special\": %p\n", "I'm special");

	return 0;

}