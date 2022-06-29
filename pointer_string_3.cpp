#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

//指针与字符串-3
int main()
{
    char buffer[100] = "ABC";
    const char *pc = NULL;
    pc = "DEF"; //字符类型指针赋值字符串，可以使用const来修饰也可以不用，具体看编译器；因为字符串字面值是常量，c++中禁止将字符串常亮赋给`char *指针`，如果是`char *p = "hello world";`，有些编译器会报错；
    cout << pc << endl; //DEF
    pc++;
    cout << pc << endl; //EF
    cout << *pc << endl; //E
    pc = buffer;
    cout << pc << endl; //ABC

    return 0;
}