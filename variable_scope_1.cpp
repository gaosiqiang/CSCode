#include <iostream>
using namespace std;

//变量的作用域example

//全局变量
int global_value = 10;

//声明函数
void changeVule(int);
void test_global_value(int);

//主函数
int main()
{
    cout << global_value << endl; //10
    //局部变量
    int score = 11;
    changeVule(score);
    cout << global_value << endl; //20
    test_global_value(1);
    cout << global_value << endl; //20
    return 0;
}

//定义函数
void changeVule(int score)
{
    //形参score也是局部变量
    if (score > 10) {
        global_value += 10;
    }
    return;
}

//定义函数
void test_global_value(int global_value)
{
    //这里的局部变量与全局变量重名，这里局部变量将屏蔽全局变量
    global_value -= 10;
    return;
}