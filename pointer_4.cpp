#include <iostream>
using namespace std;

//指针
int main()
{
    int a = 100; //定义int变量
    int *p_a = &a; //定义指针变量同时初始化
    *p_a = 101; //使用指针运算符*访问p_a指针变量指向的a
    cout << a << endl; //101
    cout << p_a << endl; //a的指针
    cout << &a << endl; //a的指针
    cout << *p_a << endl; //p_a指针变量指向的的a；101
    cout << &p_a << endl; //p_a的指针
    return 0;
}