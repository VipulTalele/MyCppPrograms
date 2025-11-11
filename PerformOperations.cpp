#include<iostream>
using namespace std;

int main(){

	int a,b;
	char  ch;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	cout << "Choose Operation (+,-,*,/):";
    cin >> ch;

	switch(ch){

		case '+' :
		cout << "Addition is : " << a + b;
		break;

		case '-' :
		cout << "Substraction is : " << a - b;
		break;

		case '*' :
		cout << "Multiplication is : " << a * b;
		break;

		case '/' :
		cout << "Division is : " << a / b;

	}

	cout << "\nGood bye....";

}