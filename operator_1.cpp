#include <iostream>
#include <limits>
#include <bitset>
using namespace std;

int main()
{
    //运算符
    cout << "start" << endl;

    cout << "start位运算" << endl;
    //位运算
    int a = 4;
    int b = 3;
    cout << "a的二进制：" << bitset<numeric_limits<unsigned int>::digits>(a) << endl; //二进制输出变量a
    cout << "b的二进制：" << bitset<numeric_limits<unsigned int>::digits>(b) << endl; //二进制输出变量b
    
    int c;
    c = a & b;
    cout << "a&b二进制：" << bitset<numeric_limits<unsigned int>::digits>(c) << endl; //二进制输出变量c
    c = a | b;
    cout << "a|b二进制：" << bitset<numeric_limits<unsigned int>::digits>(c) << endl; //二进制输出变量c
    c = a ^ b;
    cout << "a^b二进制：" << bitset<numeric_limits<unsigned int>::digits>(c) << endl; //二进制输出变量c
    c = ~a;
    cout << "~a 二进制：" << bitset<numeric_limits<unsigned int>::digits>(c) << endl; //二进制输出变量c
    c = a << 2;
    cout << "a<<2二进制：" << bitset<numeric_limits<unsigned int>::digits>(c) << endl; //二进制输出变量c
    c = a >> 2;
    cout << "a>>2二进制：" << bitset<numeric_limits<unsigned int>::digits>(c) << endl; //二进制输出变量c
    cout << "end" << endl;
    return 0;
}