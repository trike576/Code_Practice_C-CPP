 #include<iostream>
using namespace std;
int main(){
    int size,found1=0,found2=0;
    cout << "Enter the size of the array: ";
    cin >> size;

    if(size <= 0){
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int* arr = new int[size];
    int* copy1 = new int[size];
    int* copy2 = new int[size];

    cout << "Enter the " << size << " elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        copy1[i] = arr[i];
        copy2[i] = arr[i];
    }

    // Ascending sort
    for(int i = 0; i < size; i++){
        int min = i;
        for(int j = i + 1; j < size; j++){
            if(copy1[min] > copy1[j]){
                min = j;
            }
        }
        swap(copy1[min], copy1[i]);
    }

    // Descending sort
    for(int k = size - 1; k >= 0; k--){
        int max = k;
        for(int m = k - 1; m >= 0; m--){
            if(copy2[max] > copy2[m]){
                max = m;
            }
        }
        swap(copy2[max], copy2[k]);
    }
    //Check if ascending
    for(int i=0;i<size;i++){
        if(arr[i]==copy1[i]){
            
        }
        else{
            found1++;
        }
    }
    //Check if descending
    for(int i=0;i<size;i++){
        if(arr[i]==copy2[i]){
            
        }
        else{
            found2++;
        }
    }
    if(found1==0){
        cout<<"The array is sorted in ascending order"<<endl;
    }
    else if(found2==0){
        cout<<"The array is sorted in descending order"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }

    delete[] arr;
    delete[] copy1;
    delete[] copy2;
    return 0;
}
