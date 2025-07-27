#include<iostream>
using namespace std;
void altSwap(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void print(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void get(int nums[],int size){
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
}
int main(){
    int nums[100],size;
    cout<<"Enter size of the array:"<<endl;
    cin>>size;
    cout<<"Enter array numbers: "<<endl;
    get(nums,size);
    cout<<"Here's the alternately swapped array:"<<endl;
    altSwap(nums,size);
    print(nums,size);
    return 0;
}
