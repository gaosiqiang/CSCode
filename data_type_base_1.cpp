#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//定义各类变量
	cout << "定义变量：" << endl;
	//定义int类型
	int a;
	a = 2;
	int b = 1;
	int c = a + b;
	cout << "a是" << a << endl;
	cout << "b是" << b << endl;
	cout << "c是a+b的和是" << c << endl;
	//定义double类型
	double d = 3.14;
	cout << "d是" << d << endl;
	//定义char类型
	char e = 'e';
	cout << "e是" << e << endl;
	
	//变量精度转换
	cout << "精度转换：" << endl;
	a = d;
	cout << "d值赋给a后a的值是" << a << endl;

	b = b + d;
	cout << "b和d的值相加后赋给b，b的值是" << b << endl;

	b = e;
	cout << "e值赋给b后b的值" << b << ";这个值是e字符对应的ASCII码十进制的值" <<endl;


	cout << "定义常量：" << endl;

	cout << "这是字面常量" << 1 << endl;
	const int f = 123;
	// f = 123;
	cout << "常量f是" << f << endl;
	const int g = e + 1; //char加int，会先将char转成int，然后相加。
	cout << "常量g是" << g << endl;

	//endl
	cout << endl;
	return 0;
}