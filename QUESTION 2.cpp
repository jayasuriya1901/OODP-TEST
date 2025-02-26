#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double basicSalary;
    double da;
    double hra;
    double itax;
    double netSalary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin.ignore(); // Consume newline left in the buffer
        getline(cin, empName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void display() {
        da = 0.25 * basicSalary;
        hra = 800;
        itax = 0.15 * basicSalary;
        netSalary = basicSalary + da + hra - itax;

        cout << "\n-------------------- Payslip --------------------\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << fixed << setprecision(2) << basicSalary << endl;
        cout << "Dearness Allowance (DA): " << da << endl;
        cout << "House Rent Allowance (HRA): " << hra << endl;
        cout << "Income Tax (ITax): " << itax << endl;
        cout << "Net Salary: " << netSalary << endl;
        cout << "--------------------------------------------------\n";
    }
};

int main() {
    Employee emp;
    emp.accept();
    emp.display();
    return 0;
}
