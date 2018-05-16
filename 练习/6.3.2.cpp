#include<iostream>
#include<string>
#include<vector>
using namespace std;
/** 6.30 我的编译器(用于 x86 的 Microsoft (R) C/C++ 优化编译器 19.13.26132 版)提示:函数必须返回值
在有的编译器下,返回值的类型必须与函数类型相同.
bool str_subrange(const string &str1, const string &str2)
{
  if(str1.size() == str2.size()){
    return str1 == str2;
  }
  auto size = (str1.size() < str2.size()) ? str1.size() :str2.size();

  for(decltype(size) i=0;i !=size;++i)
  {
    if(str1[i] != str2[i])
    {
      return;
    }
  }
}
*/

/**
返回局部变量的引用无效.
*/

/** 6.33
void getVal(vector<string> strs,int idx)
{
  if(idx >= 0){
    cout << strs[idx] << endl;// 这里获取vector的元素,和数组的取元素差不多
    idx--;
    getVal(strs,idx);
  }
}

void main(int argc, char *argv[])
{
  vector<string> strs ={"H","E","L","L","O"};
  getVal(strs,strs.size()-1);
}
*/
