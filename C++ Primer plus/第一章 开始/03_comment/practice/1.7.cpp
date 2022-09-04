// 编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息

#include <iostream>
/*
* hello
* /* */
*/

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
