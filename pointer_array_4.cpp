#include <iostream>

using namespace std;

/**
 * 指针-指针与二维数组-1
 * @return
 */
int main()
{
    int a[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };
    cout << a << endl; //0x7ffe089814f0
    cout << a + 1 << endl; // +20字节，0x7ffe08981504
    cout << a[0] << endl; //0x7ffe089814f0
    cout << a[0] + 1 << endl; //0x7ffe089814f4，本质上是+ 4，可以看出来a[0]是指向a[0]数组的第一个元素的指针；
    cout << &a << endl; //0x7ffe089814f0
    cout << &a + 1 << endl; //0x7ffe0898152c, +(3x5x4)字节

    //    cout << &a[0][0] << endl; //
//    cout << a[1] << endl; //
//    cout << &a[1][0] << endl; //

    return 0;
}