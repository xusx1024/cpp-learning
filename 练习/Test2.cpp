#include <iostream>
#include <cstdio>
#include<cstring>

using namespace std;
struct student{
    char name[21];
    int sum;//总分数
    int num;//人数
}pStudent[11];


int main()
{

  char name[21], num[11];
      int score;
      int j = 0, t = 0, i, temp = 0;
      while (1) {
          cin >> name >> num >> score;
          temp = 0;//是否找到的标记
          if (strcmp(name, "000") == 0)
              break;
          for (i = 0; i < j; i++) {
              if (strcmp(pStudent[i].name, name) == 0)//如果当前输入在结构体数组中找到，则将分数加入sum
              {
                  pStudent[i].sum += score;
                  pStudent[i].num++;
                  temp = 1;
              }
          }
          if (temp == 0)//如果没找到，则创建当前含有name的结构体
          {
              strcpy(pStudent[j].name, name);
              pStudent[j].sum += score;
              pStudent[j].num++;
              j += 1;
          }
      }
      for (i = 0; i < j; i++)//排序
      {
          for (t = 0; t < j - i - 1; t++) {
              if (strcmp(pStudent[t].name, pStudent[t + 1].name) > 0) {

                  struct student tt;
                  tt = pStudent[t];
                  pStudent[t] = pStudent[t + 1];
                  pStudent[t + 1] = tt;
              }
          }
      }
      for (i = 0; i < j; i++) {
          cout << pStudent[i].name<<" ";
          printf("%.3f\n", 1.0 * pStudent[i].sum / pStudent[i].num);
      }
      return 0;
}
