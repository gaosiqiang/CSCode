#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

//指针与字符串-1
int main()
{
  char buffer[100] = "ABC";
  const char *pc = NULL;
  pc = "DEF";
  cout << pc << endl;
  cout << buffer << endl;

  return 0;
}