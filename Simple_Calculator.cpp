#include<iostream>
using namespace std;

int main() {
    int a, b;
    char op, choice;

    do {
        cout << "Enter the first number:" << endl;
        cin >> a;

        cout << "Enter the second number:" << endl;
        cin >> b;

        cout << "Enter the operation you want to perform (+, -, *, /, %):" << endl;
        cin >> op;

        switch(op) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                if(b == 0) {
                    cout << "Not defined" << endl;
                } else {
                    cout << a / b << endl;
                }
                break;
            case '%':
                if(b == 0) {
                    cout << "Not defined" << endl;
                } else {
                    cout << a % b << endl;
                }
                break;
            default:
                cout << "Invalid operator" << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
