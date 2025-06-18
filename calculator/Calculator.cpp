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

double Calculator::calculate(double firstNumber, char calculationOperator, double secondNumber) {
    switch (static_cast<Operator>(calculationOperator)) {
        case Operator::ADD_OPERATOR:
            return add(firstNumber, secondNumber);
        case Operator::SUBTRACT_OPERATOR:
            return subtract(firstNumber, secondNumber);
        case Operator::MULTIPLY_OPERATOR:
            return multiply(firstNumber, secondNumber);
        case Operator::DIVIDE_OPERATOR:
            return divide(firstNumber, secondNumber);
        default:
            throw calculatorError("Unknown operator");         
    }
};
