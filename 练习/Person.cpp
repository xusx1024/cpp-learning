#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
public:
  Person();
  Person(string Client_name,string Client_address);

  string name;
  string address;

  void Show_info(){
    cout << name << "'s" << " address is " << address << endl;
  }

  // 过时的用法
  string & const getname(){//使用了记时错误: 忽略引用上的限定符
    return name;
  }

  string & const getaddress()
  {
    return address;
  }
};

Person::Person(string Client_name,string Client_address):name(Client_name),address(Client_address){};

int main(int argc , char** argv)
{
  Person Client1("Mr.Right","your heart");
  Client1.Show_info();
  return 0;
}
