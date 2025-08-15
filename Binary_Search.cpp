#include<iostream>
using namespace std;
//Finding Process
int finder(int key,int s,int e,int nums[]){
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(key==nums[mid]){
            return mid;
        }
        else if(key<nums[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int size,key,nums[1000];
    cout<<"How many numbers: ";
    cin>>size;
    cout<<"Enter the numbers(Sorted in ascending order): ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    cout<<"Which number do you want to find: ";
    cin>>key;
    int realAns=finder(key,0,size-1,nums);
    if(realAns==-1){
        cout<<"Not found";
    }
    else{
        cout<<realAns;
    }
}
