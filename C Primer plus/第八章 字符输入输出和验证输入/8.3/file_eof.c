// file_eof.c -- 打开一个文件并显示该文件
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;  // FILE 一个文件的结构体
    char fname[50];
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); // 打开待读取文件
    if(fp == NULL) // 如果打开失败
    {
        printf("Failed to open file. Bye\n");
        exit(1); // 退出程序
    }
    // getc(fp)从打开的文件中获取一个字符
    while ((ch = getc(fp)) != EOF)
    {
        /* code */
        putchar(ch);
    }
    fclose(fp);  // 关闭文件
    return 0;
}


/******************************************************************************
 * 
 * exit(0)、exit(1)、return的区别
 * exit(0) : 正常运行程序并退出程序
 * exit(1) : 非正常运行导致退出程序
 * return () : 返回函数，若在主函数中，则会退出函数并返回一值
 * 
 * 详细说：
 * 1. return返回函数值，是关键字； exit 是一个函数。
 * 2. return是语言级别的，它表示了调用堆栈的返回；而exit是系统调用级别的，它表示了一个进程的结束。
 * 3. return是C语言提供的，exit是操作系统提供的（或者函数库中给出的）。exit是一个库函数，exit(1）
 *    表示发生错误后退出程序，exit(0)表示正常退出。在stdlib.h中exit函数是这样子定义的：
 *    void exit(int status)。这个系统调用是用来终止一个进程的，无论在程序中的什么位置，
 *    只要执行exit，进程就会终止进程的运行。讲到exit这个系统调用，就要提及另外一个系统调用，
 *    _exit,_exit()函数位于unistd.h中，相比于exit()，_exit()函数的功能最为简单，直接终止进程的
 *    运行，释放其所使用的内存空间，并销毁在内存中的数据结构，而exit()在于在进程退出之前要检查文件的
 *    状态，将文件缓冲区中的内容写回文件。
 * 4. return用于结束一个函数的执行，将函数的执行信息传出给其他调用函数使用；exit函数是退出应用程序，
 *    删除进程使用的内存空间，并将应用程序的一个状态返回给OS或其父进程，这个状态标识了应用程序的一些
 *    运行信息，这个信息和机器和操作系统有关
 * 5. 非主函数中调用return和exit效果很明显，但是在main函数中调用return和exit的现象就很模糊，多数情况下现象都是一致的。
 * 
 * 
********************************************************************************/