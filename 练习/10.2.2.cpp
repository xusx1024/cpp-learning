#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main(int argc, char** argv)
{

/** 10.6

int  a[4] = {1,2,3,4};
  std::vector<int> vec (a,a+4);
  cout << "before:"<< endl;
  for(std::vector<int>::iterator it = vec.begin();it != vec.end();++it){
    cout << *it << endl;
  }
  fill_n(vec.begin(),vec.size(),0);
    cout << "after:"<< endl;

  for(int i = 0;i<vec.size();++i)
  {
    cout << vec[i] << endl;
  }
  */

  /**
10.7
  */

  // vector<int> vec;
  // vec.reserve(10);
  // fill_n(vec.begin(),10,0);

  // vector<int> vec;
  // list<int>lst;
  // int i;
  // while(cin >> i)
  //   lst.push_back(i);
  // copy(lst.cbegin(),lst.cend(),vec.begin());


  /**
10.8

算法只是产生了一个插入迭代器,然后使用这个迭代器进行插入操作.
  */
  return 0;
}
