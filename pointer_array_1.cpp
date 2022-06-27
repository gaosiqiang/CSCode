#include <iostream>
using namespace std;

//指针与数组-指针与元素-1
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int array_index = 3;
    cout << "a[3]:" << a[array_index] << endl; //4
    int *p = NULL;
    p = &a[array_index];
    cout << "p:" << *p << endl; //4
    *p = 10;
    cout << "a[3]:" << a[array_index] << endl; //10
}