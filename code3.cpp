#include <iostream>

//循环结构
int main(int argc, char const *argv[])
{
	//输出小于a的自然数
	int a;
	std::cout << "请输入一个整数";
	std::cin >> a;
	if (a > 0) {

		for (int i = 0; i < a; ++i)
		{
			std::cout << i << std::endl;
		}

	} else {
		std::cout << "不得小于1";
	}
}