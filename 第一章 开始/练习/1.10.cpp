/*
使用递减运算符在循环中按递减顺序打印10到0之间的整数.
*/

#include<iostream>
using namespace std;
int main()
{
  int i = 10;

  while(i > 0)
  {
cout << --i << endl;
  }
  return 0;
}
