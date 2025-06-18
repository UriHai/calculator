#include "Calculator.h"

#include <iostream>

using std::cout;
using std::cerr;
using std::endl;

int main() { 
    double result = 0;
	
	cout << "5 + 3 = ";
    result = Calculator::calculate(5, static_cast<char>(Operator::ADD_OPERATOR), 3);
    cout << result << endl;

	cout << "5 - 3 = ";
    result = Calculator::calculate(5, static_cast<char>(Operator::SUBTRACT_OPERATOR), 3);
    cout << result << endl;

    cout << "5 * 3 = ";
    result = Calculator::calculate(5, static_cast<char>(Operator::MULTIPLY_OPERATOR), 3);
    cout << result << endl;

    cout << "5 / 3 = ";
    result = Calculator::calculate(5, static_cast<char>(Operator::DIVIDE_OPERATOR), 3);
    cout << result << endl;
    
    try {
        cout << "5 / 0 = ";
        result = Calculator::calculate(5, static_cast<char>(Operator::DIVIDE_OPERATOR), 0);
        cout << result << endl;
    } catch (const CalculatorError& exception) {
        cerr << "A calculator error has occurred (" << exception.getErrorMessage() << ")" << endl;
    }

    try {
        cout << "5 ^ 3 = ";
        result = Calculator::calculate(5, '^', 3);
        cout << result << endl;
    } catch (const CalculatorError& exception) {
        cerr << "A calculator error has occurred (" << exception.getErrorMessage() << ")" << endl;
    }

    return 0;
}