#include <iostream>
#include <string>
using namespace std;


int main(){
    const float TAX_PERCENTAGE = 0.2;

    // input here
    string name = "John Doe";
    int gross_salary = 15000000; 
    int installment = 200000; 
    int insurance = 150000;

    // or here
    /*
    getline(cin, name); 
    cin >> gross_salary;
    cin >> installment;
    cin >> insurance;
    */

    int tax = gross_salary * TAX_PERCENTAGE;
    int net_salary = gross_salary - tax - installment - insurance;

    cout << "Payslip for Employee" << endl;
    cout << "--------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << to_string(gross_salary) << ",00" << endl;
    cout << "Tax (20%): Rp" << to_string(tax) << ",00" << endl;
    cout << "Installment: Rp" << to_string(installment) << ",00" << endl;
    cout << "Insurance: Rp" << to_string(insurance) << ",00" << endl;
    cout << "Net Salary: Rp" << to_string(net_salary) << ",00" << endl;
}