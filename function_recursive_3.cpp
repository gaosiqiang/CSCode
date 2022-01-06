#include <iostream>
using namespace std;

//斐波那契数列递归函数
int f(int n)
{
    //处理第一位和第二位的初始化
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 1;
    } else {
        //处理数列
        return (f(n - 1) + f(n - 2));
    }
}

//主函数
int main()
{
    int f_len = 10;
    cout << f(f_len) << endl;
    return 0;
}