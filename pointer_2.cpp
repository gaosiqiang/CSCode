#include <iostream>
using namespace std;

//指针-指针运算符
int main()
{
    int a = 100;
    cout << "a的值：" << a << endl; //打印a的值，输出100
    cout << "a的指针：" << &a << endl; //打印a的指针，输出0x7fff8c685fa8，不同的环境可能不同
    cout << "a的指针对应的值：" << *&a << endl; //打印a指针指向的资源，输出100
    int b;
    b = *&a; //将a指针指向的资源赋给b
    cout << "b的值：" << b << endl; //打印b的值，输出100

    return 0;
}