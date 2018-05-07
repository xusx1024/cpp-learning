/*
编写程序,提示用户输入两个整数,打印出这两个整数所指定的范围内的所有整数.
*/

#include<iostream>
using namespace std;
int main()
{
int v1 = 0, v2 = 0;
cout << "plz enter 2 numbers:" << endl;
cin >> v1 >> v2;

if(v1 == v2)
{
  cout << "there is no one in them!" << endl;
}
else
{
  if(v1 > v2)
  {
    int i = v1 - v2;
    while(i >= 0)
    {
      cout << "v1 > v2 : " << v1-(i--) << endl;
    }
  }
  else{
    int i = v2 - v1;
    while(i >= 0 )
    {
      cout << " v1 < v2 : "<< v2 -(i--) << endl;
    }
  }
}
return 0;
}
