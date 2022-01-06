#include <iostream>
using namespace std;

int main()
{
    //for loop
    int array_loop[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    for (int i = 0; i < 10; i++)
    {
        cout << "i:" << i << ";array_loop:" << array_loop[i] << endl;
    }
    
    //wile loop
    int b = 0;
    while ( ++ b < 100 )
    {
        cout << "b:" << b << endl;
        // b += 1;
    }
    

    return 0;
}