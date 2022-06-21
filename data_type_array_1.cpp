#include <iostream>
using namespace std;

//数组
int main(int argc, char const *argv[])
{
	
	//声明数组a
	char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	//引用
	cout << a[1];//b
	cout << a[7];//h
	cout << a[0];//a
	//修改
	a[2] = 'x';
	a[1] = 'y';
	a[5] = 'z';
	cout << endl;
	cout << a[2];//b
	cout << a[1];//h
	cout << a[5];//a

	cout << endl;
	//打印出序号为奇数的元素
	for (int i = 1; i <= 5; ++i)
	{
		if (i % 2 != 0) {
			cout << a[i] << endl;
		}
	}

	return 0;
}