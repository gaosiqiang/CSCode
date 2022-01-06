#include <iostream>
#include <typeinfo> //引入typeinfo类库
using namespace std;

//指针
int main()
{
    int a = 100;
    cout << &a << endl; //输出变量a的指针
    cout << typeid(a).name() << endl; //输出i表示是int类型
    cout << typeid(&a).name() << endl; //输出Pi表示类型是指针，指向整数int资源的指针

    char b;
    b = 'a';
    cout << &b << endl; //输出变量b的指针
    cout << typeid(b).name() << endl; //输出c表示是char类型
    cout << typeid(&b).name() << endl; // 输出Pc表示类型是指针，指向字符char资源的指针

    cout << sizeof(&a) << endl; //输出该指针在内存中的存储多个个字节空间
    cout << sizeof(&b) << endl; //输出该指针在内存中的存储多个个字节空间

    return 0;
}