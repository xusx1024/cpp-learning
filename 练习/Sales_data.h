#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct Sales_data{
private:
  std:: string bookNo;
  unsigned units_sold =0;
  double revenue = 0.0;
  inline  double avg_price() const{
    return units_sold ? revenue / units_sold : 0;
  }
public:
  Sales_data() = default;
  Sales_data(const std::string &s) : bookNo(s){}
  Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){}
  Sales_data(std::istream &is);
  std::string isbn() const{return}
  std::string isbn() const  { return bookNo; }
  Sales_data& combine(const Sales_data&);
};
#endif

/**撰写头文件时,无论是否被包含在其他任何头文件中,都应设置保护符,防止重复包含.
*/
