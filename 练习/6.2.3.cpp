/** 6.16
bool is_empty(string &s)
{
return s.empty();
}

该函数合法,但是不算特别有用,因为并没有改变s的值,所以,最好把形参定义成常量:const string &s

*/

/** 6.17

不同.区别在于,是否对传入的对象做了修改.

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool upper_reset(const string &str){
  for(int i=0;i<str.size();i++)
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
      return true;
    }
  }
  return false;
}

string toLowerCase(string &str){
  for(int i=0;i<str.size();i++)
  {
      if(str[i] >= 'A' && str[i] <= 'Z')
      {
        str[i] = str[i] + 32;
      }
  }
  return str;
}
void main(){
  cout << "plz enter string:"<< endl;
  string str1;
  cin >> str1;
  cout << "before:" << str1 << endl;
str1 =  toLowerCase(str1);
  cout << "after:" << str1 << endl;
  if(upper_reset(str1))
  {
    cout << "have";
  }
  else
  {
    cout << "have none";
  }

  /** 6.18
bool compare(matrix &m1, matrix &m2){/.../}

vector<int>::iterator change_val(int, vector<int>::iterator){ /.../ }
  */

  /** 6.19

a,错误
b,对
c,对
d,对

  */
}
