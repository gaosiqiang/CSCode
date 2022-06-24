#include <iostream>
using namespace std;

//指针-指针变量-3
int main()
{
    int i_count = 8;
    int *i_p = &i_count;
    

    cout << "i_count是普通变量" << endl;
    cout << "i_p是指针变量" << endl;
    cout << "访问前i_count值：" << i_count << endl;

    *i_p = 58;//访问了i_p所指向的内容

    cout << "访问后i_count值：" << i_count << endl;
    cout << "i_p值：" << i_p << endl;
    cout << "i_count变量的指针：" << &i_count << endl;
    cout << "i_p指针变量所所指向的内容：" << *i_p << endl;
    cout << "i_p指针变量的指针：" << &i_p << endl;

    return 0;
}