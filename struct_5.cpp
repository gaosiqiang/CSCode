#include <iostream>

using namespace std;


int main()
{
    //定义结构体
    struct person{
        int id;
        char name[25];
    };

    person one = {
            789,
            {'g', 'a', 'o'}
    };
    cout << one.id << endl; //789
    person *p_on = &one;
    cout << (*p_on).id << endl; //789
    //cout << *p_on.id << endl; //非法代码，因为*p_on.id这个表达式会先运算p_on.id，但是p_one是指针所以找不到成员变量；
    cout << p_on->id << endl; //789，(*p_on).id表达式可以简化成p_on->id，->是指向运算符；
    p_on->id = 123;
    cout << p_on->id << endl; //123

    return 0;
}