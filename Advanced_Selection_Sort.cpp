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
    for (int i=0;i<size;i++){
        int min=i;
        for(int j=0;j<size;j++){
            if(nums[i]>nums[j]){
                min=j;
            }
        }
        swap(nums[i],nums[min]);
    }
    cout<<"Here are the numbers sorted in ascending order: ";
     for(int i=0;i<size;i++){
        cout<<nums[i]<<" 4";
    }
}
