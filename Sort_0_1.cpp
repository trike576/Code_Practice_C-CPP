#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create array of given size
    int* arr = new int[size];

    // Input elements
    cout << "Enter " << size << " elements(Only 0 and 1):\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
// Sort 0's and 1's
    for(int i=0;i<size;i++){
       for(int j=0;j<size-1;j++){
           if(arr[i]<arr[j]){
               swap(arr[i],arr[j]);
           }
       }
    }

    // Display elements
    cout << "\nArray elements are:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    return 0;
}
