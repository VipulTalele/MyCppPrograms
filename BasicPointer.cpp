#include <iostream>
using namespace std;

int main(){

	int x = 20;
	int *ptr = &x;

	cout << "Value of x : " << x << endl; 
	cout << "Address of x : " << ptr << endl;
	cout << "Value using pointer : " << *ptr << endl;

	return 0;
}