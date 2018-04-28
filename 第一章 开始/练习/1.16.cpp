/*
从cin读取一组数,输出其和.
*/

#include<iostream>
using namespace std;
int main(){
int sum = 0,val = 0;
while(cin >> val ){
  sum += val;
}

cout << "result is: " << sum << endl;
return 0 ;
}
