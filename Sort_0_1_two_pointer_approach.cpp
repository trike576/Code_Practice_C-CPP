#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for array size
    cout << "Enter the size of the array: ";
    cin >> size;
    int right=size-1,left=0;

    // Validate size
    if (size <= 0) {
        cout << "Invalid size. Size must be greater than 0." << endl;
        return 1;
    }

    int* arr = new int[size]; // Dynamic array

    // Input array elements
    cout << "Enter " << size << " elements(Only 0 amd 1):" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];5
        
        if (arr[i]<0||arr[i]>1){
            cout<<"Only o's and 1's are allowed";
            break;
        }
    }
    //sort
    while(left<right){
        while(arr[left]==0&&left<right){
            left++;
        }
        while(arr[right]==1&&left<right){
            right--;
        }
        if(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
    }
    // Output array elements
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
