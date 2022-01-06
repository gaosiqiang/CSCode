#include <iostream>
using namespace std;

void changeParam(int);

int main()
{
    int change_param = 10;
    cout << change_param << endl; //10
    changeParam(change_param);
    cout << change_param << endl; //10 因为main函数的change_param变量和changeParam函数的change_param变量分别在各自的内存栈区中，所以互不干扰。
    return 0;
}

void changeParam(int change_param)
{
    change_param++;
}