#include<iostream>
using namespace std;
int main(){
/* 4.9
const char *cp = "Hello World";
std::cout << cp << '\n';
std::cout << *cp << '\n';
if(cp && *cp){
  std::cout << "true" << '\n';
}
*/
/* 4.10
int i;
cout << "plz enter number." << endl;
cin >> i;
while (i!=42) {
  cout<< "continue input:"<<endl;
  cin>>i;
}
cout << "over" << endl;
*/
/* 4.11
int a,b,c,d;
cout << "plz enter 4 int values:" << endl;
cin>> a >> b >> c >> d;
if(a > b && b >c && c > d){
  cout << "good" << endl;
}else{
  cout << "bad" <<endl;
}
*/

/*
i != j < k的含义:
左向运算.得到boolean值,true为1,false为0,k是int,然后比较,再次得到一个boolean值.
*/
  return 0;
}
