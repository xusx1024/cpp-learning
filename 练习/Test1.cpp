/**
AAAABCCCCC
A4B5C

BAAAACCCCC
B4A5C

*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char>stack1;
    string temp;
    int i=0;
    for ( ; i < s.length() / 2; ++i) {
        stack1.push(s[i]);
    }

    while (!stack1.empty()){
        temp.push_back(stack1.top());
        stack1.pop();
    }

    for ( ; i < s.length(); ++i) {  
        temp.push_back(s[i]);
    }

    for(string::iterator iter = temp.begin(); iter != temp.end(); ++iter){
        int tempNum=1;
        if(*iter == *(iter+1)){
            while(*iter == *(iter+1)){
                tempNum++;
                iter++;
            }
            cout<<tempNum<<*iter;
        }
        else{
            cout<<*iter;
        }
    }
    return 0;
}
