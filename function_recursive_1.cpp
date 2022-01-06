#include <iostream>
using namespace std;

//回调函数
int recourt()
{
    char c;
    c = cin.get();
    //是否是键盘输入换行回车符
    if (c != '\n') {
        recourt();
    }
    cout << c;
    return 0;
}

//主函数
int main()
{
    recourt();
    cout << endl;
    return 0;
}