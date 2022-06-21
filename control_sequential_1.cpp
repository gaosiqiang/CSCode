#include <iostream>
using namespace std;

//顺序结构
int main(int argc, char const *argv[])
{
		
	int a = 0, b = 0, result = 0, c;

	//cout是标准输出
	cout << "输入两个个数";

	//cin是标准输入
	cin >> a >> b;

	result = a * b;

	cout << "abc乘积是:" << result << endl;

	return 0;
}