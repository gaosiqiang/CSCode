#include <iostream>

using namespace std;

/**
 * 结构体类型变量-2
 * @return
 */
int main()
{
    //定义结构体
    struct struct_name{
        int id;
        char name[25];
    };
    //定义初始化结构体类型变量
    struct_name p1 = {
            123,
            {'g', 'a', 'o'}
    };
    //定义不初始化
    struct_name p2;
    //结构体类型赋值
    p2 = p1;

    //引用操作结构体变量和子变量
    cout << p2.id << endl; //123
    p2.id = 456;
    cout << p2.id << endl; //456
    cout << p2.name << endl; //name
    cout << p1.id << endl; //123

    return 0;
}