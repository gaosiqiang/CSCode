#include <iostream>

using namespace std;

/**
 * 指针-指针与函数-指向符号常量的指针-1
 * @param a
 * @param n
 */
void testFunction(const int a[])
{

    cout << a << endl;
    a += 1;
    cout << a << endl;
    //*a = 1;//非法代码
    return;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << a << endl;//与sumArray函数输出的地址一致，验证了这个说法；
    testFunction(a);
    return 0;
}