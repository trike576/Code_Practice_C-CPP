#include <iostream>
using namespace std ;
int maxFinder(int nums[],int n){
    int max=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}
int minFinder(int nums[],int n){
    int min=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<min){
            min=nums[i];
        }
    }
    return min;
}
    void takeNumbers(int n,int nums[]){
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        
    }
    
    

int main() {
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int nums[n];
    cout<<"Enter numbers:";
    takeNumbers(n,nums);
    cout<<"Maximum number is "<<maxFinder(nums,n)<<endl;
    cout<<"Minimum number is "<<minFinder(nums,n)<<endl;


    return 0;
}
