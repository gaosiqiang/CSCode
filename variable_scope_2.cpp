#include <iostream>
using namespace std;

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 */
void change1(int a, int b)
{
    a = 10;
    b = 20;
    return;
}

/**
 * @brief 
 * 
 * @param a //a是数组名，a是数组在内存中的地址
 */
void change2(int a[])
{
    //这里形参a接收到的是数组的地址
    a[0] = 10;
    a[1] = 20;
    return;
}

/**
 * 主函数
 * @brief 
 * 
 * @return int 
 */
int main()
{
    int a[] = {1, 2};
    cout << a[0] << ";" << a[1] << endl; //1;2
    change1(a[0], a[1]);
    cout << a[0] << ";" << a[1] << endl; //1;2
    change2(a);
    cout << a[0] << ";" << a[1] << endl; //10;20
    return 0;
}