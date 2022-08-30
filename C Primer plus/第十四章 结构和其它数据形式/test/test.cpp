#include <iostream>

using namespace std;
int main()
{
    char a = 's';
    printf("%p\n", &a);
    cout << "&a: " << (void*)&a << endl;
    int b = 0x01;
    cout<<"&b: "<<&b<< endl;
    return 0;
}