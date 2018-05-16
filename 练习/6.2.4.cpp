#include<iostream>
#include<string>
#include<vector>
using namespace std;
/**
6.21 比较值和指针指向的值
*/
int compare(int a ,int *b)
{
  return a > *b ? a : *b;
}

/**
6.22 交换两个指针:传递指针是不行的,这样交换的是指针指向的对象,要传递指针的引用
*/
int swap(int *&a,int *&b)// 参数类型,引用,指针的引用
{
  int *c = NULL;
  c = a;
  a = b;
  b = c;
  return 0;
}
void swap2(int *a,int *b)// 通过指针进行基本类型的值交换
{
  int tmp;
  tmp = *a;
  *b = tmp;
  *a = *b;
}
void swap3(int& a, int& b)
{
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void main()
{
  int a,b;
  cout << "enter first val:" << endl;
  cin >> a;
  cout << "enter second val:" << endl;
  cin >> b;
  // cout << "res: " << compare(a,&b) << endl;
  int * val1 = &a;
  int * val2 = &b;
  cout << "before:" << *val1 << endl;
  swap(val1,val2);
  cout << "after:" << *val1 << endl;
}

/**
6.24: 存在传参问题
void print(const int ia[10])
数组不能以传值的方式传参.正确写法如下:
void print(const int (&ia)[10]) 或者
void print(const int (*ia)[10])
*/
