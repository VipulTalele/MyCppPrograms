#include<iostream>
using namespace std;

int main(){

	char str[100];

	cout << "Enter a String : ";
	cin.getline(str, 100);

	char *ptr = str;
	int length = 0;

	while(*ptr != '\0'){
		length++;
		ptr++;
	}

	cout << "Length of String : " << length << endl;

	return 0;


}