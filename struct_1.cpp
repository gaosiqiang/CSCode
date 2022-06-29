#include <iostream>

using namespace std;

/**
 * 结构体类型变量-1
 * @return
 */
int main()
{
    //定义结构体
    struct struct_name{
        int id;
        char name[25];
    };
    //定义结构体类型变量
    struct_name p = {
            123,
            {'g', 'a', 'o'}
    };
    //引用操作结构体变量和子变量
    cout << p.id << endl; //123
    p.id = 456;
    cout << p.id << endl; //456
    cout << p.name << endl; //gao
    return 0;
}