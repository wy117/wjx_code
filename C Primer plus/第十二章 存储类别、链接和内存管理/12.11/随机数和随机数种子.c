#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 概念1： srand()用来设置随机数种子的，rand()用来产生随机数
    // srand(1);
    // printf("%d", rand()); // 输出结果每次都是一个数 41

    // void srand(unsigned int)查看参数为unsigned int
    // time_t time(time_t *); // time的构造函数带参time_t *
    // typedef long time_t; // time.h定义time_t为long
    // time(NULL);
    // time(0); // 返回的是1个long型时间值，取的是当前系统时间，因此总是变化的

    srand(time(NULL)); // 就是设置当前的时间值为种子，那么种子总是变化的
    printf("%d", rand()); // 因为种子总是变化的，所以该种子产生的随机数总是变化的
}