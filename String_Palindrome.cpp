#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
  string original;
  cin>>original;
  string reverse;
  stack<char>chars;
  for (char c:original){
    chars.push(c);
  }
  for(int i=0;i<original.length();i++){
    reverse[i]=chars.top();
    chars.pop();
  }
  for(int i=0;i<original.length();i++){
    if(original[i]!=reverse[i]){
cout<<"It is not an palindrome";
return 0;
    }
  }
  cout<<"It is an palindrome";
}
