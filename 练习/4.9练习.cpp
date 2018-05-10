#include <iostream>
using namespace std;
int main()
{
/* 4.28
  cout << "int:"<< sizeof(int)  << endl;
    cout << "char:"<< sizeof(char)  << endl;
      cout << "long:"<< sizeof(long)  << endl;
        cout << "short:"<< sizeof(short)  << endl;
          cout << "double:"<< sizeof(double)  << endl;
            cout << "boolean:"<< sizeof(bool)  << endl;
              cout << "wchar_t:"<< sizeof(wchar_t)  << endl;
                cout << "char16_t:"<< sizeof(char16_t)  << endl;
                  cout << "char32_t:"<< sizeof(char32_t)  << endl;
                    cout << "long long:"<< sizeof(long long)  << endl;
                      cout << "float:"<< sizeof(float)  << endl;
                        cout << "long double:"<< sizeof(long double)  << endl;

                        */

  /*4.29

  int x[10];
  int *p = x;

  cout << sizeof(x) / sizeof(*x) << endl;//40 / 4  = 10
  cout << sizeof(p) / sizeof(*p) << endl;//4 / 4 = 1

// int 每个元素占4个字节,32位. 10个元素一共40个字节. *x是数组的第一个元素,占4个字节.
// x对象是有10个int元素的数组,占40个字节

// 指针是int类型,所以占4个字节
// 指针解引用,指向的是x数组的首个int元素,占4个字节

*/

// 4.30 sizeof满足右结合律

(a) sizeof x + y  等价于 (sizeof x)+y
(b) sizeof p->mem[i] 等价于 sizeof (p -> mem[i])
(c) sizeof a < b 等价于 (sizeof a) < b
(d) sizeof f() 等价于 sizeof (f())


  return 0;
}
