#include <iostream>

using namespace std;

//定义结构体
struct struct_name{
    int id;
    char name[25];
};

struct_name test()
{
    //定义初始化结构体类型变量
    struct_name p = {
            1234,
            {'g', 'a', 'o'}
    };
    return p;
}

/**
 * 结构体类型变量-2
 * @return
 */
int main()
{
    //定义结构体类型变量
    struct_name p;
    p = test();
    //引用操作结构体变量和子变量
    cout << p.id << endl; //1234
    cout << p.name << endl; //gao

    return 0;
}