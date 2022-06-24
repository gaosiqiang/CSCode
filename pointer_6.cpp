#include <iostream>
using namespace std;

//指针-指针变量-4
int main()
{
    int a = 0, b = 0, temp;
    int *p1 = NULL, *p2 = NULL; 
    //这里定义2个int类型基类的指针变量；在初始化的时候分别赋值NULL，这里是定义了2个空指针变量，表示这2个指针变量的值是空的；
    //定义指针变量的时候为什么要初始化值，因为如果不初始化值那么指针变量的值是不确定的，万一是一个地址那就会很危险；

    cin >> a;
    cin >> b;

    p1 = &a;
    p2 = &b;

    if (*p1 < *p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    cout << "max" << *p1 << endl;
    cout << "min" << *p2 << endl;

    return 0;

}