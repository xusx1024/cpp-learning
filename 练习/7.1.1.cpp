#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Sales_data{
  Sales_data();
  string bookNo;
  unsigned units_sold;
  double revenue;
  // 类内部的变量成员不允许在定义时初始化,必须使用构造函数
};
Sales_data::Sales_data(){// 必须调用构造函数初始化类内部的变量成员
  units_sold = 0;
  revenue = 0.0;
}
void main(int argc, char* argv[])
{
  Sales_data total;
  if(cin >> total.bookNo >> total.units_sold >> total.revenue){
    Sales_data trans;
    while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
      if(total.bookNo == trans.bookNo){
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      }
      else{
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        total = trans;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
  }
  else{
    cerr << "No data?!" << endl;
  }
}
