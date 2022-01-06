#include <iostream>
using namespace std;

int main ()
{
    cout << "typedef" << endl;

    //您可以使用 typedef 为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法；https://www.runoob.com/cplusplus/cpp-data-types.html
    typedef int byte_4;
    byte_4 a = 1;
    byte_4 b = 3.14;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    cout << "endl" << endl;
    return 0;
}