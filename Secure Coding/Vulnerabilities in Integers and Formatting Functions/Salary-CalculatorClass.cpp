/*
Salary Calculator Program
CSC 450 Programming III
Johnny Olmedo
*/

#include <iostream>
#include <iomanip>
#include <ostream>
using namespace std;
class SalaryCalculator
{
    public:
        void get_hrs();
        // this function will get input from user for hours worked
        void get_pay();
        // this function will retrieve pay of user

        void get_ot();
        // this function will get overtime hours worked by user (if any)

        void calculate();
        // this function will determine the users salary

        void display();
        // this function displays salary
    
    private:
        double hours_worked;
        double pay_rate;
        double overtime;
        double salary;
        double * hours_PTR;
        double * pay_PTR;
        double * ot_PTR;
        double * otPay_PTR;
        double * salary_PTR;
};

void SalaryCalculator::get_hrs(){
    cout << "Enter hour worked: ";
    cin >> hours_worked;
    hours_PTR = &hours_worked;
}

void SalaryCalculator::get_pay() {

    cout << "Enter Pay Rate: ";
    cin >> pay_rate;
    pay_PTR = &pay_rate;
  
}

void SalaryCalculator::get_ot() {

    cout << "Enter overtime hours worked: ";
    cin >> overtime;
    ot_PTR = &overtime;
    
} 

void SalaryCalculator::calculate() {
    double otPay;
    if (*ot_PTR > 0) {
        // calculate overtime pay
        otPay = *ot_PTR * (*pay_PTR * 1.5);
        // set salary with overtime pay
        // salary = hours * pay rate + overtime pay
        salary = *hours_PTR * *pay_PTR + otPay;
    }
    else {
        salary = *hours_PTR * *pay_PTR;
    }
    // set salary ptr with salary calculated
    salary_PTR = &salary;
}

void SalaryCalculator::display() {
    cout << setw(10) << *salary_PTR << endl;
    cout << setprecision(3) << *salary_PTR << endl;
}

