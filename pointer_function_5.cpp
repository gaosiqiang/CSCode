#include <iostream>

using namespace std;

/**
 * 指针-指针与函数-函数返回指针类型-1
 * @param a
 * @param n
 * @param m
 * @return
 */
int *getPtr(int a[][5], int n, int m)
{
    //'a'声明为多维数组除第一个维度外的必须对所有维度都要有边界
    int *ptr = NULL;
    if (n > 0) {
        n -= 1;
    }
    if (m > 0) {
        m -= 1;
    }
    ptr = *(a + n) + m;
    return ptr;
}

int main()
{
    int a[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };
    cout << *getPtr(a, 1, 5) << endl;
    return 0;
}