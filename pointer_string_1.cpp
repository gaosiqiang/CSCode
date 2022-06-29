#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

//指针与字符串-1
int main()
{
    char a[] = "Hello Word", b[20];
    char *p1, *p2;
    for (p1 = a, p2 = b; *p1 != '\0'; p1++, p2++) {
        *p2 = *p1;
    }
    *p2 = '\0';
    cout << a << endl;
    cout << b << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    return 0;
}