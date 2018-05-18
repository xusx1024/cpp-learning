#include<iostream>
#include<string>
#include<vector>
#include"Window_mgr.h"
using namespace std;
int main(int argc, char** argv)
{
  Screen myScreen(25,25,' ');
  Window_mgr t;
  myScreen.move(10,10).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  return 0;
}
