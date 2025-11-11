#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
   
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();  
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

   
    void displayData() {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[50]; 

    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp[i].getData();
    }

   
    cout << "\n------ Employee Details ------\n";
    for (int i = 0; i < n; i++) {
        emp[i].displayData();
        cout << "---------------------------\n";
    }

    return 0;
}
