#include <iostream>
using namespace std;

//指针-指针变量-5
int main()
{
    int a = 0, b = 0;
    int *p1 = NULL, *p2 = NULL, *temp = NULL;
    
    cin >> a;
    cin >> b;

    p1 = &a;
    p2 = &b;

    if (*p1 < *p2) {
        temp = p1;
        p1 = p2;
        p2 = temp;
    }
    cout << *p1 << endl;
    cout << *p2 << endl;

    return 0;
}