#include<iostream>
using namespace std;
// Function to get max values in windows and slide it one by one
void wMax(int arr[],int size,int wSize,int res[])
{
    for(int i=0;i<=size-wSize;i++)
    {
        int currMax=arr[i];
        for(int j=0;j<wSize;j++)
        {
            currMax=max(currMax,arr[i+j]);
        }
        res[i]=currMax;
    }
}
int main()
{
    int size,wSize;
    cout<<"Enter size : ";
    cin>>size;
    cout<<"Enter window size : ";
    cin>>wSize;
    while(wSize>size)
    {
        cout<<"The entered window size is exceeding size,enter it again";
        cin>>wSize;
    }
    int arr[size],res[size-wSize+1];
    cout<<"Enter array elements one by one : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximums of sliding windows are ";
    wMax(arr,size,wSize,res);
    for(int i=0;i<size-wSize+1;i++)
    {
        cout<<" "<<res[i];
    }
    cout<<" respectively";
}
