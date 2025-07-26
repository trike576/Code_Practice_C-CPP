#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==1)return 0;
    if(n==2||n==3)return 1;
    
    int a=1,b=1;
    for(int i=4;i<=n;i++){
        b+=a;
        a=b-a;
    }
    return b;
}
int main() {
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Invalid Input"<<endl;
    }
    else{
    cout<<fibonacci(n)<<endl;
    }
    return 0;
}
