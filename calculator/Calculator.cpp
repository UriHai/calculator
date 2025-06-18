#include "Calculator.h"

/**
 * @brief Get the sum of two numbers
 *
 * @param first_number          [IN]    The first number
 * @param second_number         [IN]    The second number
 * @return                              The sum of the two numbers
 */
double Calculator::add(double first_number, double second_number) {
    return first_number + second_number;
}

/**
 * @brief Get the difference of two numbers
 *
 * @param first_number          [IN]    The first number
 * @param second_number         [IN]    The second number
 * @return                              The difference of the two numbers
 */
double Calculator::subtract(double first_number, double second_number) {
    return first_number - second_number;
}

/**
 * @brief Get the multiply of two numbers
 *
 * @param first_number          [IN]    The first number
 * @param second_number         [IN]    The second number
 * @return                              The multiply of the two numbers
 */
double Calculator::multiply(double first_number, double second_number) {
    return first_number * second_number;
}

/**
 * @brief Get the qoutient of two numbers
 *
 * @param first_number          [IN]    The first number
 * @param second_number         [IN]    The second number
 * @return                              The qoutient of the two numbers
 */
double Calculator::divide(double first_number, double second_number) {
    if (second_number == 0) {
        throw calculatorErrors::ZERO_DIVISION;
    }
    return first_number / second_number;
}

/**
 * @brief Get the qoutient of two numbers
 *
 * @param first_number          [IN]    The first number
 * @param calculation_operator  [IN]    The calculation operator
 * @param second_number         [IN]    The second number
 * @return                              The qoutient of the two numbers
 */
double Calculator::calculate(double first_number, char calculation_operator, double second_number) {
    switch (calculation_operator) {
        case (operators::ADD_OPERATOR):
            return add(first_number, second_number);
        case (operators::SUBTRACT_OPERATOR):
            return subtract(first_number, second_number);
        case (operators::MULTIPLY_OPERATOR):
            return multiply(first_number, second_number);
        case (operators::DIVIDE_OPERATOR):
            return divide(first_number, second_number);
        default:
            throw calculatorErrors::UNKOWN_OPERATOR;         
    }
};
