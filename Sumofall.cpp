#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int sum = 0;
    int temp = num;
    while (temp != 0) {
        sum += temp % 10; 
        temp /= 10;       
    }

    cout << "Sum of digits of " << num << " is: " << sum << endl;
    return 0;
}
