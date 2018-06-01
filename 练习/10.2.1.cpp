#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(int argc, char** argv)
{
  /** 10.3
  int a[10] = {1,2,3,4,5,6,7,7,9,2};
  vector<int> v (a,a+10);
  cout << "result is : " << accumulate(v.cbegin(),v.cend(),0) << endl;
  */

  /**
10.4

初始值设定为0,表明返回值是int类型,double会转换成int,损失精度.
  */

  /**
10.5

C风格字符串和string的区别要知道.见/doc/C风格字符串和string的区别.md
equal方法是只读算法,因此没有影响.
c/C++风格不要混用.

  */
  return 0;
}
