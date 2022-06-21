#include <iostream>
using namespace std;

//分支结构
int main(int argc, char const *argv[])
{
	//两个数比较大小
	int a = 0, b = 0;
	std::cout << "请输出a和b";
	std::cin >> a >> b;
	if ( a == b ) {
		std::cout << "相等" ;
	} else if ( a > b) {
		std::cout << "a大" ;
	} else {
		std::cout << "b大" ;
	}

	return 0;
}