#include <iostream>
using namespace std;

//指针与数组-指针与数组名-1
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int array_index = 0;
    cout << a << endl; // 0x7fff7c2a1b10
    cout << *a << endl; // 1
    cout << &a[array_index] << endl; // 0x7fff7c2a1b10
    cout << a[array_index] << endl; // 1
}