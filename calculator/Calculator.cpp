#include "Calculator.h"

double Calculator::add(double firstNumber, double secondNumber) {
    return firstNumber + secondNumber;
}

double Calculator::subtract(double firstNumber, double secondNumber) {
    return firstNumber - secondNumber;
}

double Calculator::multiply(double firstNumber, double secondNumber) {
    return firstNumber * secondNumber;
}

double Calculator::divide(double firstNumber, double secondNumber) {
    if (secondNumber == 0) {
        throw calculatorError("Zero division");
    }
    return firstNumber / secondNumber;
}

double Calculator::calculate(double firstNumber, char calculation_operator, double secondNumber) {
    switch (calculation_operator) {
        case operators::ADD_OPERATOR:
            return add(firstNumber, secondNumber);
        case operators::SUBTRACT_OPERATOR:
            return subtract(firstNumber, secondNumber);
        case operators::MULTIPLY_OPERATOR:
            return multiply(firstNumber, secondNumber);
        case operators::DIVIDE_OPERATOR:
            return divide(firstNumber, secondNumber);
        default:
            throw calculatorError("Unknown operator");         
    }
};
