// const全局变量在静态区，直接或间接都不可以修改
// const局部变量在栈上，可以间接修改
// 但是定义为const的变量不建议修改
#include <stdio.h>

const int g_c = 20;

void test(void)
{
    // 不能直接修改
    // g_c = 10;

    // warning: initialization discards 'const' qualifier from pointer target type
    // 不能间接修改    
    int *p = &g_c;
    *p = 100;
    printf("%d\n", g_c);
}

int main(void)
{
    test();
    return 0;
}