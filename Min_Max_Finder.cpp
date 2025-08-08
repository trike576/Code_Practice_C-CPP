#include<iostream>
using namespace std;
int main(){
    int size,arr[10000];
    cout<<"Enter the size of array: ";
    cin>>size;
    if(size<=0||size>10000){
        cout<<"Please enter some valid size";
        return 0;
    }
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int smallest=arr[0],largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"The smallest and largest elements of the array respectively are "<<smallest<<" and "<<largest<<endl;
}
