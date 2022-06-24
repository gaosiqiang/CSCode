#include <iostream>
using namespace std;

//指针-地址运算符-1
int main()
{
    int pointer_a = &(int a = 100); //这种表达式是非法代码
    cout << pointer_a << endl;
    return 0;
}