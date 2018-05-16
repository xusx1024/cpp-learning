#include <iostream>
#include <initializer_list> // 注意导入标准库
using namespace std;
int sum(const initializer_list<int> &i){// 不需要修改,使用const,使用引用
  int sum=0;// 必须赋初值,否则为随机一个数
  for(auto beg = i.begin();beg != i.end();++beg) // for循环注意,自动类型,类似数组有上下界,前置++
  {
    sum += *beg;
  }
  return sum;
}
void main(int argc, char *argv[]){
  initializer_list<int> sour {1,2,3};// 注意初始化形式
  cout << sum(sour) << endl;
}

// 6.28 string类型

// 6.29 最佳实践,使用const 引用类型
