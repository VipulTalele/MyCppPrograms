#include<iostream>
using namespace std;

void updateNum(int *p){

	*p = *p + 10;
}

int main(){

	int a = 5;

	cout << "Before Update : " << a << endl;

	updateNum(&a);

	cout << "After Update : " << a << endl; 

	return 0;
}