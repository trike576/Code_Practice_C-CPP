#include<iostream>
using namespace std;
bool perfectSquare(int num){
    long long i=2;
        if(num==0||num==1)
            return true;
        do{
        if(i*i==num){
            return true;
        }
        i++;
    }
    while(i*i<=num);
    return false;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(perfectSquare(num)){
        cout<<"Yeah it's perfect square";
    }
    else{
        cout<<"Nah it's not perfect square";
    }
}
