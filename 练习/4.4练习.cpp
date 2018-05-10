#include<iostream>
using namespace std;
int main()
{
  /* 4.13
  int i;
  double d;
  d = i = 3.5;
  cout << "d: " << d << endl;// 3
  cout << "i: " << i <<endl;//3
  i = d = 3.5;
  cout << "d: " << d << endl;//3.5
  cout << "i: " << i <<endl;//3
  */

/* 4.14
int i ;
  //cout << (42=i) << endl;// 编译错误,字面值是右值,只有左值才能被赋值
  if(i = 42)
  cout << "true" << endl;
  else
  cout << "false" << endl;
  */

  /* 4.15

double dval;
int ival;
int *pi;

 pi = 0;
 // ival = pi;  无法从 int* 转换为int
 dval = ival;

 */

 /*4.16

(a) if(p = getPtr() != 0)
合法但不一定符合预期.
赋值操作优先级最低,p的结果是1或0,但作者的意图也许是想要比较p值与0的大小

(b) if(i=1024)
合法但不一定符合预期.
也许作者是想要求(i== 1024),误写成了赋值操作,这样if条件总是大于0,恒为true

 */
  return 0;
}
