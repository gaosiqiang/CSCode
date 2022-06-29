#include <iostream>

using namespace std;

//静态局部变量

int *test()
{
    static int a = 20;
    return &a;
}

int main()
{
    int *p = NULL;
    p = test();
    cout << *p << endl; //20
    return 0;
}