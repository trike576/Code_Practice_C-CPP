#include <iostream>
using namespace std;

bool isAlreadyCounted(int num, int counted[], int countIndex) {
    for (int i = 0; i < countIndex; i++) {
        if (num == counted[i]) {
            return true;
        }
    }
    return false;
}

void occFinder(int arr[], int size) {
    int counted[size];  // to store already counted unique elements
    int countIndex = 0;

    for (int i = 0; i < size; i++) {
        if (isAlreadyCounted(arr[i], counted, countIndex))
            continue;

        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        counted[countIndex++] = arr[i];
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    occFinder(arr, size);

    return 0;
}
