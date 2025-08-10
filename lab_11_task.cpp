#include <iostream>
#include <string>
using namespace std;

// Define a structure Employee
struct Employee {
    string name;
    float monthlySalary;
    int monthsWorked;
};

// Function to input employee details
void inputEmployeeDetails(Employee &emp) {
    cout << "Enter employee's name: ";
    getline(cin, emp.name);  // Input the name with spaces
    cout << "Enter monthly salary: ";
    cin >> emp.monthlySalary;
    cout << "Enter months worked: ";
    cin >> emp.monthsWorked;
}

// Function to calculate annual salary
float calculateAnnualSalary(const Employee &emp) {
    return emp.monthlySalary * emp.monthsWorked;
}

// Function to display employee details
void displayEmployeeDetails(const Employee &emp) {
    float annualSalary = calculateAnnualSalary(emp);
    cout << "\nEmployee Details:\n";
    cout << "Name: " << emp.name << endl;
    cout << "Monthly Salary: $" << emp.monthlySalary << endl;
    cout << "Months Worked: " << emp.monthsWorked << endl;
    cout << "Annual Salary: $" << annualSalary << endl;
}

int main() {
    Employee emp;  // Create an Employee object

    // Input employee details
    inputEmployeeDetails(emp);

    // Display employee details and calculate annual salary
    displayEmployeeDetails(emp);

    return 0;
}
 