#include<iostream>
using namespace std;

int main()
{

  int i = 42;
  const int &r = i;// 常量引用

  i += 2; // 修改对象值
  cout << r << endl; // 检查常量引用的值,猜猜是42?还是44?

  double dval = 3.14;
  const int &rd = dval;
  constexpr int j = 9;
  return 0;
}
