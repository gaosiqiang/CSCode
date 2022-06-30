#include <iostream>

using namespace std;


int main()
{
    //定义结构体
    struct person{
        int id;
        char name[25];
    };

    person rows[3] = {
            {
                    123,
                    {'g', 'a', 'o'}
            },
            {
                    456,
                    {'w', 'a', 'n', 'g'}
            },
            {
                    789,
                    {'y', 'a', 'n', 'g'}
            }
    };

    person *p = rows;

    cout << p->id << endl; //123
    p++;
    cout << p->id << endl; //456
    p++;
    cout << p->id << endl; //789


    return 0;
}