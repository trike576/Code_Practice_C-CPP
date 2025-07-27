#include<iostream>
void reverseArray(int arr[],int size){
    //0 to size/2
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
