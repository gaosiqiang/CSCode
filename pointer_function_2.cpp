#include <iostream>

using namespace std;

/**
 * 指针-指针与函数-数组名做实参-1
 * @param p
 * @param n
 * @return
 */
int sumArray(int *p, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *p++;
    }
    return total;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    cout << sumArray(a, n) << endl; //55
    return 0;
}