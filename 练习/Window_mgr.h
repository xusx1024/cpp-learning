#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include<iostream>
#include<string>
#include<vector>
#include"Screen.h"
using namespace std;
class Window_mgr{
private:
  std::vector<Screen> screens{Screen(24,80,'x')};
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
  ScreenIndex addScreen(const Screen&);
};
Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s)
{
  screens.push_back(s);
  return screens.size() - 1;
}
void Window_mgr::clear(ScreenIndex i)
{
  Screen &s = screens[i];
  s.contents = string(s.height * s.width, ' ');
}
#endif
