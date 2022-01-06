#include <iostream>
using namespace std;

//指针
int main()
{
    int a = 100;
    cout << a << endl; //打印a的值，输出100
    cout << &a << endl; //打印a的指针，输出0x7fff8c685fa8，不同的环境可能不同
    int b;
    b = *&a; //将a指针指向的资源赋给b
    cout << b << endl; //打印b的值，输出100
    cout << *&a << endl; //打印a指针指向的资源，输出100
    return 0;
}