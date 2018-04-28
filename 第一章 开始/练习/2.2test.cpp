#include<iostream>
using namespace std;

int main(){
/*
int i = 100,sum = 0;
for(int i =0; i< 10;i++){
sum += i;
}

cout << "result is: " << sum << endl;
*/

/* 2.16
int i  =0 , &r1 = i;
double d = 0,&r2 = d;
r2 = 3.14159;
r2 = r1;
i = r2;
r1 = d;
return  0;
*/
/* 
int i , &ri = i;
i = 5;
ri = 10;
cout << i <<  "  " << ri << endl;
return 0;
*/

//2.20

int i = 42;
int * p1 = &i;
cout << *p1 << endl;
*p1 = *p1 * *p1;

cout << "result is: " << *p1 << endl;
return 0;
}