#include<iostream>
using namespace std;

void swapNums(int *a, int *b){

	int temp = *a;

	*a = *b;

	*b = temp;
}

int main(){

	int x = 10, y = 20;

	cout << "Before Swap(x): " << x << ", Before Swap(y) : " << y << endl;

	swapNums(&x, &y);

    cout << "After Swap(x): " << x << ", Before Swap(y) : " << y << endl;

    return 0; 
}