#include "Calculator.h"

#include <iostream>

using std::cout;
using std::endl;

int main() { 
	double result = 0;
	Calculator myCalc; 
	
	cout << "5 + 3 = ";
    result = myCalc.calculate(5, '+', 3);
    cout << result << endl;

	cout << "5 - 3 = ";
    result = myCalc.calculate(5, '-', 3);
    cout << result << endl;

    cout << "5 * 3 = ";
    result = myCalc.calculate(5, '*', 3);
    cout << result << endl;

    cout << "5 / 3 = ";
    result = myCalc.calculate(5, '/', 3);
    cout << result << endl;
    
    try {
        cout << "5 / 0 = ";
        result = myCalc.calculate(5, '/', 0);
        cout << result << endl;
    }

    catch (calculatorErrors calculatorError) {
        if (calculatorError == calculatorErrors::ZERO_DIVISION) {
            cout << "Dividing by zero is not allowed!" << endl;
        }
    }

    try {
        cout << "5 ^ 3 = ";
        result = myCalc.calculate(5, '^', 3);
        cout << result << endl;
    }

    catch (calculatorErrors calculatorError) {
        if (calculatorError == calculatorErrors::UNKOWN_OPERATOR) {
            cout << "Unkown operator!" << endl;
        }
    }

	return 0;
}