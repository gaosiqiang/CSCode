#include <iostream>
using namespace std;

int main()
{
    
    cout << "start" << endl;
    //定义字符类型的数组结构，实现定义字符串。
    char a[] = "adcdefg";
    char b = 'c';
    cout << a << endl; // adcdefg
    cout << a[0] << endl; // a
    cout << a[1] * 2 << endl; // 200
    cout << a[1] + b << endl; // 199

    cout << "end" << endl;
    return 0;
}