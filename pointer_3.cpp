#include <iostream>
using namespace std;

//指针变量
int main()
{
    int *pointer; //定义了一个指针变量。
    int a = 100;
    pointer = &a; //&a获取a的指针，然后赋给指针变量pointer。赋值后，称指针变量pointer指向了变量a。
    cout << pointer << endl; //输出的是指针地址
    return 0;
}