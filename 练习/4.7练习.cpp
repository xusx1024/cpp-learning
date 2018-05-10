#include<iostream>
#include<vector>
using namespace std;


int   main(int argc, char const *argv[]) {

/* 4.21

vector<int> vec = {1,3,4,4567,2323,222};

cout << "before:" << endl;
for( auto i = vec.begin(); i != vec.end(); ++i){
  cout <<  (*i) << endl;
}
auto b = vec.begin();
while(b != vec.end()){
  if(((*b) % 2) != 0){
    (*b) *= 2;
  }

  ++b;
}
cout << "after:" << endl;
for( auto i = vec.begin(); i != vec.end(); ++i){
  cout <<  (*i) << endl;
}

*/

// 4.22 -1

/*
int i ;
cout << "plz enter strudets' grade:"<<endl;
cin >> i;
// 条件运算符
//cout << ( ( i > 95) ? "best" : (i > 85 && i < 90) ? "better" : (i < 60) ? "fail" : "pass" )<< endl;
// 多个if
if(i > 95){
cout<<"best"<<endl;
}else if(i > 85 && i < 90){
cout<<"better"<<endl;
}else if (i < 60) {
 cout<<"fail"<<endl;
}else{
  cout<<"pass"<<endl;
}
*/

// 4.23 条件运算符的优先级非常低


return 0;
}
