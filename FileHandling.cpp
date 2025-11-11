#include <iostream>
#include<fstream>

using namespace std;

int main(){

	ofstream fout("C:\\CDAC C++\\test.txt"); // for write file

	 fout << "Hello World.\n"
	    "Practice small projects.\n"

		"Calculator with menu options.\n"

		"Guess the number game.\n"

		"Simple bank system (using classes).\n"

		"Array sorting program.\n";

	 fout.close();

	 ifstream fin("C:\\CDAC C++\\test.txt"); // for read file
	 string line;
	 while(getline(fin, line))
	 	cout << line << endl;
	 
	 fin.close();
	 return 0;
}