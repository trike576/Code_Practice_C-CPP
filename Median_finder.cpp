#include<iostream>
using namespace std;
float getMedian(int arr1[], int arr2[],long long size1,long long size2){
    float med=0;
    for(long long i=0;i<size1;i++){
        med+=arr1[i];
    }
    for(long long i=0;i<size2;i++){
        med+=arr2[i];
    }
    long double res=med/(float)(size1+size2);
    return res;
}
int main(){
    long long size1,size2;
    int nums1[1000000],nums2[1000000];
    cout<<"Enter the sizes of first and\nsecond array: ";
    cin>>size1>>size2;
    cout<<"Enter the "<<size1<<" elements of first array: ";
    for(int i=0;i<size1;i++){
        cin>>nums1[i];
    }
    cout<<"Enter the "<<size2<<" elements of second array: ";
    for(int i=0;i<size2;i++){
        cin>>nums2[i];
    }
    cout<<getMedian(nums1,nums2,size1,size2);
}
