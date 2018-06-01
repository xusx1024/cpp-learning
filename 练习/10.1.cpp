#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

int main(int argc , char ** argv)
{
/** 10.1
  int a[10] = {1,3,4,6,7,3,5,6,8,0};
  std::vector<int> v(a,a+10);
  int value = 3;
 cout << value << " appears times is : " << count(v.begin(),v.end(),value) << endl;

 */

/** 10.2 */
string a[10] = {"a","b","c","d","e","a","b","c","d","e"};
list<string> l(a,a+10);
string value = "c";
cout << value << " appears times is: " << count(l.begin(),l.end(),value) << endl;

  return 0;

}
