#include<iostream>
#include<string>
using namespace std;
/**
6.25
*/
// void main(int argc,char ** argv)
void main(int argc,char *argv[])
{

string str;
for(int i=1;i != argc ; ++i)
{
  str += argv[i];
  str += "-";
}
cout << "arg[0]:"<< argv[0] << endl;
cout << str << endl;
}

// 参数1:输入参数数组的大小
// 参数2:数组的指针
// 注意:数组第0个元素,放置的是程序的名字,本例中argv[0] = 6.2.5
// 注意:以后再写程序时,最好带上参数,像java那样
