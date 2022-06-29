#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

//指针与字符串-2
int main()
{
    int a = 5;
    int *pa = &a;

    int b[5] = {1, 2, 3, 4, 5};
    int *pb = b;

    char c[5] = {'a', 'b', 'c', 'd', 'e'};
    char *pc = c;

    char d[5] = "abcd";
    char *pd = d;

    cout << a << endl;
    cout << pa << endl;
    cout << b << endl;
    cout << pb << endl;
    cout << c << endl;
    cout << pc << endl;
    cout << d << endl; //会输出'abcd'；cout操作符会对字符数组元素自动进行拼接处理；cout只有字符类型的才这样处理；
    cout << pd << endl; //会输出'abcd'；与上面的同理；
    cout <<static_cast<void*>(c) << endl; //输出地址：0x7fff27a18c20
    cout <<static_cast<void*>(pc) << endl; //输出地址：0x7fff27a18c20

    return 0;
}