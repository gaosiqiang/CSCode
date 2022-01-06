#include <iostream>
using namespace std;

int main ()
{
    cout << "start" << endl;

    //定义指定索引范围的数组
    int a[2] = {1, 2};
    //定义动态索引范围的数组
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //访问数组元素，标准输出
    cout << a[1] << endl; //2
    cout << b[2] << endl; //3

    //定义二维数组
    int c[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    //二维数组的访问
    cout << c[0][1] << endl; //2
    c[0][1] = 9;
    cout << c[0][1] << endl; //9

    //定义三维数组
    int d[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };
    //访问三维数组
    cout << d[0][1][2] << endl; //6

    cout << "end" << endl;
    return 0;
}