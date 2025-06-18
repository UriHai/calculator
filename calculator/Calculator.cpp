#include "Calculator.h"

double Calculator::add(double first_number, double second_number) {
    return first_number + second_number;
}

double Calculator::subtract(double first_number, double second_number) {
    return first_number - second_number;
}

double Calculator::multiply(double first_number, double second_number) {
    return first_number * second_number;
}

double Calculator::divide(double first_number, double second_number) {
    if (second_number == 0) {
        throw calculatorError("Zero division");
    }
    return first_number / second_number;
}

double Calculator::calculate(double first_number, char calculation_operator, double second_number) {
    switch (calculation_operator) {
        case operators::ADD_OPERATOR:
            return add(first_number, second_number);
        case operators::SUBTRACT_OPERATOR:
            return subtract(first_number, second_number);
        case operators::MULTIPLY_OPERATOR:
            return multiply(first_number, second_number);
        case operators::DIVIDE_OPERATOR:
            return divide(first_number, second_number);
        default:
            throw calculatorError("Unkown operator");         
    }
};
