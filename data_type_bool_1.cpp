#include <iostream>
using namespace std;

int main()
{
    cout << "start" << endl;
    //定义布尔类型
    bool is_true = true;
    cout << is_true << endl; // 1
    //逻辑上非0的的数据在逻辑上等价于布尔的true
    int a = true;
    int b = false;
    bool c = 1;
    bool d = 0;
    bool e = -100;
    cout << "is_true:" << is_true << ";a:" << a << ";b:" << b << ";c:" << c << ";d:" << d << ";e" << e << endl;
    cout << "end" << endl;
    return 0;
}