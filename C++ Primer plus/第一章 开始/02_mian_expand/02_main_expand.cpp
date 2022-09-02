#include <iostream>
int main()
{
    // endl 操作符，效果是结束当前行，并将与设备关联的缓冲区buffer中的内容刷到设备中
    // 缓冲刷新操作可以保证到目前为止程序所产生的所有输出都真正写入输出流中，而不是仅停留在内存中等待写入流
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    // 前缀std指出名字cout和endl是定义在名为std的命名空间namespace
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}