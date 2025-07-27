#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if((arr[i]==arr[j]) && (j!=i)){
                found++;
            }
        }
        if(found==0){
            cout<<arr[i];
        }
       
    }

    return 0;
}
