#include <iostream>

using namespace std;

/**
 * 指针-指针与二维数组-2
 * 遍历二维数组元素
 * @return
 */
int main()
{
    int a[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };
    int *pInt = NULL;
    for (pInt = &a[0][0]; pInt < &a[0][0] + 12;pInt++) {
        cout << "指针：" << pInt << "；值：" << *pInt << endl;
    }
    return 0;
}