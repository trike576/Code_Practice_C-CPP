#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isBalanced(string expr){
    stack<char>st;
    for(char ch:expr){
        if(ch=='('||ch=='['||ch=='{'){
            st.push(ch);
        }
        else if(ch==')'||ch==']'||ch=='}'){
            if(st.empty())return false;
            char top=st.top();
            st.pop();
            if((ch==')'&&top!='(')||(ch==']'&&top!='[')||(ch=='}'&&top!='{'))return false;
        }
    }
    return st.empty();
}
int main(){
    string expr;
    cout<<"Enter brackets: ";
    cin>>expr;
    if(isBalanced(expr))cout<<"Balanced";
    else cout<<"Not Balanced";
}
