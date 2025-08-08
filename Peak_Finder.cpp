#include<iostream>
using namespace std;
int peakFinder(int arr[],int start,int end){
    int mid;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]){
            end=mid;
        }
        else{
            start=mid;
        }
    }
    return mid;
}
int main(){
    int size,arr[1000];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The peak element is present at index "<<peakFinder(arr,0,size);
}
