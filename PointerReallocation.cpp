#include <iostream>
using namespace std;

int main() {
    int oldSize = 3;
    int* arr = new int[oldSize];  

    cout << "Enter " << oldSize << " integers: ";
    for (int i = 0; i < oldSize; i++) cin >> arr[i];

   
    int newSize = 5;
    int* newArr = new int[newSize];

    for (int i = 0; i < oldSize; i++) newArr[i] = arr[i];

    cout << "Enter " << (newSize - oldSize) << " more integers: ";
    for (int i = oldSize; i < newSize; i++) cin >> newArr[i];

    cout << "New Array: ";
    for (int i = 0; i < newSize; i++) cout << newArr[i] << " ";
    cout << endl;

    delete[] arr;
    delete[] newArr;

    return 0;
}
