#include <iostream>
using namespace std;

int main(){

	float balance = 0;

	int ch;

	do {
	cout << "Enter Operation : \n";
	cout << "1.Deposit.\n";
	cout << "2.Withdraw.\n";
	cout << "3.Bank Balance.\n";
	cout << "4.Exit.\n";
	cout << "Choice. ";
    cin >> ch;

    switch(ch){
    	case 1:
    	float deposit;

    	cout << "Enter Deposit Amount : ";
    	cin >> deposit;

    	if (deposit > 0){
    		balance += deposit;
    		cout << "Deposited : " << deposit << endl;
    		cout << "Updated Balance : " << balance << endl;

    	}

    	else{
    		cout << "Invalid Deposit Amount.\n";
    	}
    	break;

    	case 2:

    	float withdraw;

    	cout << "Enter Amount to Withdraw :";
    	cin >> withdraw;

    	if (withdraw > 0 && withdraw <= balance){
    		balance -= withdraw;

    		cout << "Withdrawn : " << withdraw << endl;
    		cout << "Updated Balance : " << balance << endl;
    	}
    	else {
    		cout << "Insufficient Funds or Invalid Amount.\n";
    	}

    	break;

    	case 3:

    	cout << "Available Funds : " << balance << endl;
    	
    	break;

    	case 4:

    	cout << "Exit.Thank You!!\n";
    	break;

    	default:
    	cout << "Invalid Choice. Try Again..\n";

    }

} while (ch !=4);

return 0;
}

