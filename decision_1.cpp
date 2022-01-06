#include <iostream>
using namespace std;

int main()
{
    //if判断语句
    int a = 1;
    int b = a + 1;
    if (a > b) {
        cout << "a大于b" << endl;
    } else if (a < b)
    {
        cout << "a小于b" << endl;
    } else {
        cout << "a等于b" << endl;
    }
    
    //switch分支判断
    a += 1;
    switch (a)
    {
    case 1:
        cout << "a是1" << endl;
        break;
    case 2:
        cout << "a是2" << endl;
        break;
    default:
        cout << "a未知" << a << endl;
        break;
    }
    return 0;
}