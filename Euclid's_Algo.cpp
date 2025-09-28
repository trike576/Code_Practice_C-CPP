 #include<iostream>
using namespace std;
//Recursive
int euclidRec(int a,int b){
    return b==0?a:euclidRec(b,a%b);
}
//Non-recursice
int euclidNonrec(int a,int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b,choice;
    cout<<"Enter two numbers to find their gcd: ";
    cin>>a>>b;
    if(a==0&&b==0){
        cout<<"GCD is undefined when both numbers are zero.\n";
        return 0;
    }
    cout<<"How do you want to find it\n1.Recursively(1)\n2.Non-recursively(2)\n";
    cin>>choice;
    if(choice==1){
        cout<<"Ok!doing it recursively.\n";
        cout<<"The gcd is "<<euclidRec(a,b);
    }
    else{
        cout<<"Ok!doing it non-recursively.\n";
        cout<<"The gcd is "<<euclidNonrec(a,b);
    }
    
}
