#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>
#include"Window_mgr.h"
using namespace std;
int height;
class Screen{
public:
  friend class Window_mgr;
  // friend void Window_mgr::clear(Window_mgr::ScreenIndex);
  // typedef std::string::size_type pos;
  using pos = std::string::size_type;
  Screen() = default;
  Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht * wd,c){}
  char get() const
       {return contents[cursor];}
  inline char get(pos ht,pos wd) const
  {
    pos row = ht * width;
    return contents[row + wd];
  }
  Screen &move(pos r, pos c);

private:
  pos cursor = 0;
  pos height =0,width =0;
  std::string contents;

public:
  Screen &set(char);
  Screen &set(pos,pos,char);


public:
  Screen &display(std::ostream &os)
      {do_display(os);return * this;}
  const Screen &display(std::ostream &os) const
      {do_display(os); return *this;}

private:
  void do_display(std::ostream &os) const{os << contents;}


  };


inline
Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline Screen &Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}
inline Screen &Screen::set(pos r,pos col,char ch)
{
  contents[r*width + col] = ch;
  return *this;
}
#endif
