#include <iostream>
using namespace std;

//编译器数据类型所占空间字节
int main(int argc, char const *argv[])
{
	short int a = 0b111;
	cout << dec << a << endl;
	cout << hex << a << endl;
	cout << oct << a << endl;
	cout << sizeof(double);
	return 0;
}