/*
while 循环,将50到100的整数相加.
*/
#include<iostream>
using namespace std;
int main()
{
  int i= 50,sum = 0;
  while(i<= 100)
  {
    sum += i;
    i++;
  }

cout << "The result is: " << sum << endl;
  return 0;
}
