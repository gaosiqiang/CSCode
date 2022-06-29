#include <iostream>

using namespace std;

//定义结构体
struct struct_name{
    int id;
    char name[25];
};

void test(struct_name p2)
{
    cout << p2.id << endl; //123
    p2.id = 456;
    cout << p2.id << endl; //456
    cout << p2.name << endl; //gao
}

/**
 * 结构体类型变量-2
 * @return
 */
int main()
{

    //定义初始化结构体类型变量
    struct_name p1 = {
            1234,
            {'g', 'a', 'o'}
    };
    test(p1);
    //引用操作结构体变量和子变量
    cout << p1.id << endl; //123

    return 0;
}