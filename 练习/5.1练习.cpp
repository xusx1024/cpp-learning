/**
5.1
空语句就是只有一个分号的语句.
空语句并不总是无用的.比如:
一个while循环,条件判断中就可以完成所以操作,但是while中仍然需要一条语句,这时可以使用空语句,或空块.
比如:
我们在写:for(;;)这种无限循环时.

*/

/**
5.2

块就是复合语句,用花括号括起来的语句和声明序列.

在某些地方,语法上需要一条语句,逻辑上需要多条语句,此时可以用块.比如while,for,在语法上,他们后面需要跟一条
执行语句,但是在实际的逻辑中,也许要做许多别的事情,此时应该使用块.
*/

/**
5.3

改写后,可读性降低.
*/

#include<iostream>
using namespace std;
int main(){
cout << "Note: real answer ,see the source code's note!"<< endl;
int val=0,sum;
while(val <= 10,sum += val, ++val)
;
  return 0;
}
