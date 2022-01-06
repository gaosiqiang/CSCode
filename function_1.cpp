#include <iostream>
#include "function_tools.cpp"
using namespace std;

/**
 * 自定义函数
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int addNumber(int a, int b)
{
    return a + b;
}

/**
 * 主函数，cpp系统约定的主函数，也是cpp程序的入口函数
 * @brief 
 * 
 * @return int 
 */
int main()
{
    int res;
    int a = 1;
    int b = 2;
    res = addNumber(a, b);
    cout << "res:" << res << endl; //3
    cout << addOneByNmber(a) << endl; //2

    return 0;
}

