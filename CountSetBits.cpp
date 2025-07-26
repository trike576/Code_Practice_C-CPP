#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n > 0) {
        if(n & 1) count++;  
        n = n >> 1;         
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = countSetBits(num);
    cout << "Number of set bits in " << num << " is: " << result << endl;

    return 0;
}
