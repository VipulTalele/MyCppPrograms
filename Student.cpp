#include <iostream>
using namespace std;

class BookStore {

private:
	int bookid;
	string bookname;
	string author;
    float price;
    static storename = "Gurukrupa BookStrore.";

public:

    void setData(){
	cout << "Enter Book Id : ";
	cin >> id;
	cin.ignore();

	cout << "Book Name : ";
	getline(cin, bookname);

	cout << "Author : ";
	getline(cin, author);

	cout << "Enter Price : ";
	cin >> price;

	}

   void displayData(){

   	cout << "\nBook Id : " << bookid;
   	cout << "\nName : " << bookname;
   	cout << "\nAuthor : " << author;
   	cout << "\nPrice : " << price;
   	cout << "\nStore Name : " << storename << endl;

   }
};

int main(){

	int n;

	cout << "Enter Number of Books : ";
	cin >> n;

    BookStore book[50];

    for(int i = 0; i < n; i++){
    	cout << "Enter Book Details " << i + 1 << " : \n";
    	book[i].getData();
    }

    cout << "\n============== Book Details ==============\n";
    for(int i = 0; i < n; i++){
    	book[i].displayData();

    	cout << "\n--------------------------------------\n";
    }

    return 0;
}