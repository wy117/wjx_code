// 9.给定下面的输出
// please choose one of the following:
// 1) copy files     2) move files
// 3) remove files   4) quit
// Enter the number of your choose:
// a.编写一个函数，显示一份有4个选项的菜单，提示用户进行选择
// b.编写一个函数，接受两个int类型的参数分别表示上限和下限。该函数从用户的输入中读取整数
//   如果整数超出规定上下限，函数再次打印菜单（使用a部分的函数）提示用户输入，然后获取一个新值
//   如果用户输入的整数在规定范围内，该函数则把整数返回主调函数。
//   如果用户输入一个非整数字符，该函数应返回4
// c.使用本题a和b部分的函数编写一个最小型的程序，最小型的意思是
//   该程序不需要实现菜单选项中各选项的功能，只需显示这些选项并获取有效的响应即可
#include <stdio.h>

#define STATUS "*************************************************"
#define QUIT 4
int menu(void)
{
    printf("%s%s\n", STATUS, STATUS);
    printf("Please choose one of the following:\n");
    printf("1) copy files\t\t\t2) move files\n");
    printf("3) remove files\t\t\t4) quit\n");
    printf("Enter the number of your choice:\n");
    printf("%s%s\n", STATUS, STATUS);
}

int choice(int lower, int upper)
{
    int ans, goods;
    goods = scanf("%d", &ans);
    while (goods == 1 && (ans < lower || ans > upper))
    {
        printf("%d is not a valid choice; try again\n", ans);
        menu();
        scanf("d", &ans);
    }
    if (goods != 1)
    {
        /* code */
        printf("Non-numeric input.");
        ans = 4;
    }
    return ans;
    
}

int main(void)
{
    int res;
    menu();
    while ((res = choice(1, 4)) != 4)
    {
        /* code */
        printf("I like choice %d.\n", res);
    }
    printf("Bye!\n");

    return 0;
}