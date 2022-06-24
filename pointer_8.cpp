#include <iostream>
using namespace std;

//指针-指针运算-1
int main()
{
    int a = 0;
    int *p = NULL;
    int *temp = NULL;
    temp = p = &a;
    cout << p << endl; //0x7fff92b4cb24
    p++;
    cout << p << endl;//0x7fff92b4cb28
    return 0;
}