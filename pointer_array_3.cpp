#include <iostream>
using namespace std;

//指针与数组-&的意义-1
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    
    cout << a << endl; //0x7ffc63e86740
    cout << a + 1 << endl;//0x7ffc63e86744
    cout << &a << endl;//0x7ffc63e86740
    cout << &a + 1 << endl;//0x7ffc63e86754
    cout << *(&a) << endl;//0x7ffc63e86740
    cout << *(&a) + 1 << endl;//0x7ffc63e86744
    cout << sizeof(a) << endl;//20，是数组a占用了20个字节；
    cout << sizeof(&a) << endl;//8，是数组指针占用了8个字节；
}