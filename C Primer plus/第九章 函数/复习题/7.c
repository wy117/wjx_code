// 7.下面的函数定义是否正确
// void salami(num)
// {
//     int num, count;
//     for ( count = 1; count < num; num++)
//     {
//         /* code */
//         printf(" 0 salami mio!\n");
//     }
    
// }

// 原答案:
// 函数定义不正确
// 1. 形参num未指定类型
// 2.for循环中的num使用的是函数体定义的num并且未赋初值，形参num成了摆设
// 3.num++不正确，这样循环就跳不出去了

// 参考答案:
// 不正确,num应声明在salami()函数的参数列表中，而不是声明在函数体内。另外把num++ 改为count++