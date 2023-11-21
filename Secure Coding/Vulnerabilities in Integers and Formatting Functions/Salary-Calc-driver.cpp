#include "Salary-CalculatorClass.cpp"

// start main
int main () {
    // create instance of Salary Calculator class
    SalaryCalculator sal_calc;
    sal_calc.get_hrs();
    sal_calc.get_pay();
    sal_calc.get_ot();
    sal_calc.calculate();
    sal_calc.display(); 
    return 0;
}