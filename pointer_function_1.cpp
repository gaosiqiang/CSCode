# include <iostream>

using namespace std;

void Rank(int *p1, int *p2)
{
    int temp;
    if (*p1 > *p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    return;
}

int main()
{
    int a = 2, b = 1;
    int *p1 = NULL, *p2 = NULL;
    p1 = &a, p2 = &b;
    Rank(p1, p2);
    cout << a << endl; // 1
    cout << b << endl; // 2
    return 0;
}