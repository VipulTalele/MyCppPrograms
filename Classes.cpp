#include<iostream>
using namespace std;

class Student{
	 public : 

	 string name;
	 int age;

	 void display(){

	 	cout << "Name : " << name << endl << "Age : " << age << endl;
	 }
};

int main(){

	Student s1;
	s1.name = "Vipul.";
	s1.age = 23;
	s1.display();
	return 0;

}