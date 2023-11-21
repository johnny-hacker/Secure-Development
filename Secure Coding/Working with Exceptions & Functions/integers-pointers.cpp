#include <iostream>
#include <ostream>
using namespace std;
int main()
{
    // declare varibales for inputs and pointers
    int * ptr_one;
    int * ptr_two;
    int * ptr_three;
    int input_one = 0;
    int input_two = 0;
    int input_three = 0;    // get integer inputs from user
    cout << "Please enter 3 integer values: ";

    cin >> input_one >> input_two >> input_three;
    
    // create and assign integer pointers for each variable 
    ptr_one = &input_one;
    ptr_two = &input_two;
    ptr_three = &input_three;

    // display the contents of the varibles and pointers
    cout << "\nFor the First Input: " << '\n';
    cout << "Value stored at the pointers location: " << *ptr_one << '\n';
    cout << "Memory address of pointer: " << ptr_one << '\n'; 
    cout << "Value of input variable: "  << input_one << '\n';
    cout << '\n';
    // second input
    cout << "For the Second Input: " << '\n';
    cout << "Value stored at the pointers location: " << *ptr_two << '\n';
    cout << "Memory address of pointer: " << ptr_two << '\n'; 
    cout << "Value of input variable: "  << input_two << '\n';
    cout << '\n';
    // thrid input
    cout << "For the Third Input: " << '\n';
    cout << "Value stored at the pointers location: " << *ptr_three << '\n';
    cout << "Memory address of pointer: " << ptr_three << '\n'; 
    cout << "Value of input variable: "  << input_three << '\n';
    cout << '\n';
    // retun main
    return 0;

}