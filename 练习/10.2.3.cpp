#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// 遍历容器
void print(vector<string> &vec,string str)
{
    cout << str << endl;
    for(const auto & s : vec)
      cout << s << " ";
    // for(vector<string>::iterator it = vec.begin();it != vec.end(); ++it){
    // cout << * it << " ";
  // }
  cout <<""<< endl;
}

// 容器排序去重
void elimDups(vector<string> &words)
{
  sort(words.begin(),words.end());//按照字母序升序排序
  print(words,"after sort: ");
  auto end_unique =  unique(words.begin(),words.end());//不是真正删除元素,只是覆盖相邻的重复元素
  words.erase(end_unique,words.end());// 真正地删除元素
  print(words,"after erase: ");
}


int main(int argc, char** argv)
{

  string strs[] = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
  vector<string> vec(strs,strs+10);
  print(vec,"before:");
  elimDups(vec);

  return 0;


/**
10.10
算法不改变容器大小的原因:算法只作用于迭代器,而不直接对容器进行操作.

*/
}
