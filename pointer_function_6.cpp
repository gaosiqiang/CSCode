#include <iostream>

using namespace std;

/**
 * 指针-指针与函数-函数返回指针类型-2
 * @param a
 * @param n
 * @param m
 * @return
 */
 int *getPtr()
 {
     int a = 20;
//     int *p = &a;
//     return p;
     return &a;
 }

 int main()
 {
     int *p = NULL;
     p = getPtr();
     cout << *p << endl;
     return 0;
 }