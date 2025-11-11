#include <iostream>
using namespace std;

class Student{

	public : 

	 int roll;
     string name;
    
    void show(){

    	cout << "Roll No : " << roll << endl;
    	cout << "Name : " << name << endl;


    }
};

int main (){

	Student s1;
	s1.roll = 105;
	s1.name = "Vipul.";
	s1.show();
	return 0;
}