#include <iostream>
using namespace std;
void decimalToBinary(int n){
    if (n == 0) return;
    decimalToBinary(n / 2);
    cout << n % 2;
}
int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    if (num == 0) cout << 0;
    else decimalToBinary(num);
    cout << endl;
    return 0;
}
