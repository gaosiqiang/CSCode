#include <iostream>
using namespace std;

//十进制转二进制
void convert(int x)
{
    if ((x / 2) != 0) {
        convert(x / 2);
        cout << x % 2; //打印在递归调用之后是因为放在递归调用之后，它才会逆序打印出来
    } else {
        cout << x; //整除2的商是0那么x不是1就是0，所以直接拼接即可。
    }
    return;
}

//主函数
int main()
{   
    int x = 0; //最好是给初始化值，有的编译器会有奇怪的值
    cout << "输入十进制数：";
    cin >> x;
    cout << "十进制：" << x << endl;
    cout << "二进制：";
    convert(x);
    cout << endl;
    return 0;
}