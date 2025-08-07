#include<iostream>
using namespace std;
int lastOcc(int arr[],int start,int end,int key){
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key) {
            end =mid-1;
        }
    }
    return ans;
}
int firstOcc(int arr[],int start,int end,int key){
    int ans=-1;
    while(start<=end){
int mid=start+(end-start)/2;        if(arr[mid]==key){
            end=mid-1;
            ans=mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key) {
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int size,arr[100],key;
    cout<<"Enter the size of array: ";
    cin>>size;
    int end=size-1;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"About which element you wanna know about: ";
    cin>>key;
    int first=firstOcc(arr,0,size-1,key);
    int last=lastOcc(arr,0,size-1,key);
    if(first==-1){
        cout<<"Element not found";
    }
    else{
    cout<<"The first occurence of "<<key<<" is "<<first<<" and the last occurence is "<<last<<endl;
    }
}
