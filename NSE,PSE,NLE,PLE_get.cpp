 #include <iostream>
using namespace std;

// Next smaller element
int getNSE(int arr[], int size, int index) {
    for (int j = index + 1; j < size; j++) {
        if (arr[j] < arr[index])
            return arr[j];
    }
    return -1;
}

// Next larger element
int getNLE(int arr[], int size, int index) {
    for (int j = index + 1; j < size; j++) {
        if (arr[j] > arr[index])
            return arr[j];
    }
    return -1;
}

// Previous smaller element
int getPSE(int arr[], int size, int index) {
    for (int j = index - 1; j >= 0; j--) {
        if (arr[j] < arr[index])
            return arr[j];
    }
    return -1;
}

// Previous larger element
int getPLE(int arr[], int size, int index) {
    for (int j = index - 1; j >= 0; j--) {
        if (arr[j] > arr[index])
            return arr[j];
    }
    return -1;
}

int main() {
    int arr[100], size;
    char repeat;

    cout << "Enter the size of array: ";
    cin >> size;
    if (size <= 0 || size > 100) {
        cout << "Invalid array size. Must be between 1 and 100.\n";
        return 0;
    }

    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    do {
        int index, choice;

        cout << "\nEnter the index to perform your operation (0 to " << size-1 << "): ";
        cin >> index;

        if (index < 0 || index >= size) {
            cout << "Invalid index. Try again.\n";
            continue; // ask again without exiting
        }

        cout << "\nChoose operation:\n"
             << "1. Next Smaller Element\n"
             << "2. Next Larger Element\n"
             << "3. Previous Smaller Element\n"
             << "4. Previous Larger Element\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Next smaller element: " << getNSE(arr, size, index) << endl; break;
            case 2: cout << "Next larger element: "  << getNLE(arr, size, index) << endl; break;
            case 3: cout << "Previous smaller element: " << getPSE(arr, size, index) << endl; break;
            case 4: cout << "Previous larger element: "  << getPLE(arr, size, index) << endl; break;
            default: cout << "Invalid choice. Try again.\n";
        }

        cout << "\nDo you want to perform another operation? [Y/N]: ";
        cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');

    cout << "Goodbye!\n";
    return 0;
}
