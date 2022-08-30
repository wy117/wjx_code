#include <stdio.h>


// 1. 常变量
// 变量用const修饰，其值不得被改变。任何改变此变量的代码都会产生编译错误，const加在类型前后均可
// int main(void)
// {
//     const int i = 10;
//     int const j = 20; // i,j都用做常变量

//     i = 15;
//     // error: assignment of read-only variable 'i'
//     j = 25;
//     // error: assignment of read-only variable 'j'
//     return 0;
// }



// 2. 常指针
// const跟着指针一起使用的时候有两种方法
// const可用来限制指针不可变，也就是说指针指向的内存地址不可变，
// 但可以随意修改该地址指向的内存的内容
// int main(void)
// {
//     int i = 10;
//     int *const j = &i; // 常指针，指向int型变量
//     (*j)++; // 可以改变变量的内容
//     j++; // 错误 不能改变常指针指向的内存地址
//     // error: increment of read-only variable 'j'
// }


// const也可用来限制指针指向的内存不可变，但指针指向的内存地址可变
// int main(void)
// {
//     int i = 20;
//     const int *j = &i; // 指针，指向int型变量
//     // 也可以写成int const * j = &i;
//     j++; // 指针指向的内存地址不可变
//     (*j)++; // 错误，不能改变内存地址
//     // increment of read-only location '*j'
// }


// 在第一个例子中，const用来修饰指针j,j不可变（也就是指向int变量的常指针）；

// 第二个例子中，const用来修饰*j,*j不可变（也就是指向int常量的指针）。

// 这两种方式可以组合起来使用，使指针和内存都不可变
// int main(void)
// {
//     int i = 10;
//     const int *const j = &i; // 指向int常量的常指针
//     j++; // 错误，不能改变指针指向的地址
//     // increment of read-only variable 'j' 

//     (*j)++; // 错误，不能改变常量的值
//     // increment of read-only location '*j'
// }


