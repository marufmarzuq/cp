// Task 5: Program to Check Given Character is Uppercase, Lowercase, Digit or Special Character

#include <iostream>
using namespace std;

main() {
    char ch;
    cout << "Write a character: ";
    cin >> ch;

    if(48 <= ch && ch <= 57) {
        cout << ch << " is a number";
    } else if (65 <= ch && ch <= 90) {
        cout << ch << " is a uppercase character";
    } else if (97 <= ch && ch <= 122) {
        cout << ch << " is a lowercase character";
    } else {
        cout << ch << " is a Special character";
    }
    
    return 0;
}