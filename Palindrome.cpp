#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, temp;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;     
        reversed = reversed * 10 + digit;  
        temp /= 10;                
    }

    if (num == reversed)
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
