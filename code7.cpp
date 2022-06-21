#include <iostream>
using namespace std;

/**
 * 测试逗号（,）运算符
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main()
{
	int a;
    a = 1;
    a = 2, a = 3, a = 10;
    a = 1, 2, 3; //输出1
	cout << "a=" << a << endl;
	return 0;
}