#include <stdio.h>

int main(void)
{

    typedef int arr4[4];    // arr4是一个内含4个int的数组
    typedef arr4 arr3x4[3]; // arr3x4是一个内含3个arr4的数组
    int sum2(arr3x4 ar, int rows);
    int sum2(int ar[3][4], int rows); // 3将被省略
    int sum2(int ar[][4], int rows);

    int sum4d(int(*ar)[12][20][30], int rows); // ar是一个指向12x20x30的int数组

    // const int **pp2;
    // int *p1;
    // const int n = 13;
    // pp2 = &p1; // 允许，但是赋值会从指针目标类型中丢弃const限定符
    // *pp2 = &n; // 有效，两者都声明为const，这使得p1指向n
    // *p1 = 10; // 有效，但改变了const n的值

    // int x = 20;
    // const int y = 23;
    // int *p1 = &x;
    // const int *p2 = &y;
    // const int **pp2;
    // p1 = p2; // 不安全const指针赋给非const指针,编译代码时会给出警告，执行代码是未定义的
    // p2 = p1; // 有效，把非const指针赋给const指针
    // pp2 = &p1; // 不安全，嵌套指针类型赋值

    // const int y;
    // const int *p2 = &y;
    // int * p1;
    // p1 = p2;

    // int n = 5;
    // double x;
    // int *p1 = &n;
    // double *pd = &x;
    // x = n; // 隐式类型转换
    // pd = p1; // 编译时错误

    // int *pt;
    // int(*pa)[3];
    // int ar1[2][3];
    // int ar2[3][2];
    // int **p2; // 一个指向指针的指针
    // // pt指向int类型
    // pt = &ar1[0][0]; // &ar1[0][0]指向int类型数据
    // pt = ar1[0]; // ar1[0]指向ar1[0][0],也是指向int类型数据
    // // pa是指向一个内含3个int类型元素数组的指针
    // // ar1指向内含3个int类型元素数组的指针
    // pa = ar1; // 有效
    // pa = ar2; // 无效，ar2是指向内含2个int类型元素数组的指针
    // // p2 指向指针的指针
    // p2 = &pt; // 都是指向指针的指针
    // *p2 = ar2[0]; // 都是指向int类型的数据
    // p2 = ar2; // 无效，ar2是指向内含2个int类型元素数组的指针

    return 0;
}