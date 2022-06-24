#include <iostream>
#include <typeinfo> //引入typeinfo类库
using namespace std;

//指针-地址运算符
int main()
{
    cout << "start" << endl;
    int a = 100;
    cout << "a的指针是：" << &a << endl; //输出变量a的指针
    cout << "a的值是：" << typeid(a).name() << endl; //输出i表示是int类型
    cout << "a的指针的数据类型是：" << typeid(&a).name() << endl; //输出Pi表示类型是指针，指向整数int资源的指针

    char b;
    b = 'a';
    cout << "b的指针是：" << &b << endl; //输出变量b的指针
    cout << "b的值是：" << typeid(b).name() << endl; //输出c表示是char类型
    cout << "b的指针的数据类型是：" << typeid(&b).name() << endl; // 输出Pc表示类型是指针，指向字符char资源的指针

    cout << "a的指针大小是：" << sizeof(&a) << "个字节" << endl; //输出该指针在内存中的存储多个个字节空间
    cout << "a的指针大小是：" << sizeof(&b) << "个字节" << endl; //输出该指针在内存中的存储多个个字节空间

    cout << "end" << endl; //最后输出需要回车就加上endl操作符了
    return 0;
}