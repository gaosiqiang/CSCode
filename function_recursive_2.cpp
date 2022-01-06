#include <iostream>
using namespace std;

//切饼问题
int q(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return (n + q(n-1));
    }
}

int main()
{
    int len = 4;
    cout << q(len) << endl;
    return 0;
}