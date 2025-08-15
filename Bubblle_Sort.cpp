#include<iostream>
using namespace std;
int main(){
    int size,nums[1000];
    cout<<"How many numbers? ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers: ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    //Sort
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    cout<<"Here are the numbers sorted in ascending order: ";
     for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
}
