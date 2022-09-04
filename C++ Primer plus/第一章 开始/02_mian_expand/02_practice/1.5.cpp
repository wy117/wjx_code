// 我们将所有输出操作放在一条很长的语句中.重写程序，将每个运算对象的打印操作放在一条独立的语句中
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 3, y = 4;
    cout << "The sum of " << x << " and " << y << " is " << x * y << endl;
    cout << "The sum of ";
    cout << x;
    cout << " and ";
    cout << y;
    cout << " is ";
    cout << x * y << endl;
    return 0;
}
