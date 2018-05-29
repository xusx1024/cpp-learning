#include<iostream>
#include<cmath>
using namespace std;

struct Shape{

  private :
  int w;
  int h;
  char c;
  public :
  void set(int w, int h,char c);
  void show();
};
void Shape :: set(int w,int h,char c)
{
  this -> w =  w;
  this -> h = h;
  this -> c = c ;
}

void Shape :: show(){
  int i = 0;
  int j = 0;
  int k = 0;
  if( this -> h == 1){
for(;i<w;i++)
cout << c << endl;
    return;
  }
  for(j=0;j<this -> h;j++){
    if(j == 0 || j == this ->h-1){
      for(;i<this -> w-1;i++){
        cout << c ;
      }
      cout << c << endl;
      i = 0;
    }else{
      cout << c;
      for(;k< abs(this -> w-2)  ; k++){
        cout << " ";
      }
      k = 0;
      cout << c << endl;
    }
  }
}

int main()
{
  int f,s;
  char c;
  cin >> f >> s >> c;
  Shape shape ;
  shape.set(f,s,c);
  shape.show();
}
