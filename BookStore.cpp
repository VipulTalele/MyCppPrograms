#include <iostream>
#include<algorithm>
using namespace std;

class BookStore {

private:
	int bookid;
	string bookname;
	string author;
    float price;
    static string storename;

public:

    void getData(){

	cout << "Enter Book Id : ";
	cin >> bookid;
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
   int getBookId() const { 
   	return bookid; 
   }

   string getBookName() const {
    return bookname; 
}

float getPrice() const{
	return price;
}
};

string BookStore :: storename = "Gurkrupa Store.";

bool sortByID(const BookStore &b1, const BookStore &b2){

	return b1.getBookId() < b2.getBookId();
}

bool sortByName(const BookStore &b1, const BookStore &b2) {
    string name1 = b1.getBookName();
    string name2 = b2.getBookName();

   
    transform(name1.begin(), name1.end(), name1.begin(), ::tolower);
    transform(name2.begin(), name2.end(), name2.begin(), ::tolower);

    return name1 < name2;
}

bool SortByPrice(const BookStore &b1, const BookStore &b2) {
	return b1.getPrice() < b2.getPrice();
}



int main(){

	int n;

	cout << "Enter Number of Books : ";
	cin >> n;

    BookStore book[50];

    for(int i = 0; i < n; i++){
    	cout << "Enter Book Details " << i + 1 << " : \n";
    	book[i].getData();
    }

    sort(book, book + n, sortByID);

    sort(book, book + n, sortByName);

    sort(book, book + n, SortByPrice);

    cout << "\n============== Book Details ==============\n";
    for(int i = 0; i < n; i++){
    	book[i].displayData();

    	cout << "\n--------------------------------------\n";
    }

    return 0;
}