#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
  string original;
  string reverse;
  cin>>original;
  stack<char>chars;
  for (char c:original){
    chars.push(c);
  }
  for(int i=0;i<original.length();i++){
    reverse[i]=chars.top();
    chars.pop();
    cout<<reverse[i];
  }
}
