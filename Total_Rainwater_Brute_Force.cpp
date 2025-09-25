#include<iostream>
using namespace std;
//Finding left max
int maxLeft(int index,int arr[])
{
    int leftMax=0;
    for(int i=0;i<index;i++)
    {
        leftMax=max(leftMax,arr[i]);
    }
    return leftMax;
}
//Finding right max
int maxRight(int index,int arr[],int size)
{
    int rightMax=0;
    for(int i=size-1;i>index;i--)
    {
        rightMax=max(rightMax,arr[i]);
    }
    return rightMax;
}
//Total rainwater
int rainwater(int arr[],int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    {
        int leftMax=maxLeft(i,arr),rightMax=maxRight(i,arr,size);
        if(arr[i]<leftMax&&arr[i]<rightMax)
        total+=min(leftMax,rightMax)-arr[i];
    }
    return total;
}
int main(){
    int size;
    cout<<"How many buildings are there?\n";
    cin>>size;
    int arr[size];
    cout<<"Enter building's sizes:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The total rainwater that will be stored between the buildings is "<<rainwater(arr,size)<<" units";
    
}
