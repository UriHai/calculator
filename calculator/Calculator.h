#pragma once

#include <string>

class Calculator final{
public:
    /**
     * @brief Calculate expression
     *
     * @param firstNumber          [IN]    The first number
     * @param calculationOperator  [IN]    The calculation operator
     * @param secondNumber         [IN]    The second number
     * @return                             The result of the expression
     */
    static double calculate(double firstNumber, char calculationOperator, double secondNumber);

private:
    /**
     * @brief Get the sum of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The sum of the two numbers
     */
    static double add(double firstNumber, double secondNumber);

    /**
     * @brief Get the difference of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The difference of the two numbers
     */
    static double subtract(double firstNumber, double secondNumber);

    /**
     * @brief Get the multiply of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The multiply of the two numbers
     */
    static double multiply(double firstNumber, double secondNumber);

    /**
     * @brief Get the quotient of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The quotient of the two numbers
     */
    static double divide(double firstNumber, double secondNumber);
};

class CalculatorError {
public:
    explicit CalculatorError(std:: string error);
    std::string getErrorMessage() const;

private: 
    std::string m_errorMessage;
};

class ZeroDivisionError final: public CalculatorError {
public:
    explicit ZeroDivisionError();
};

class UnknownOperatorError final: public CalculatorError {
public:
    explicit UnknownOperatorError();
};

enum class Operator: char { 
    ADD_OPERATOR = '+',
    SUBTRACT_OPERATOR = '-',
    MULTIPLY_OPERATOR = '*',
    DIVIDE_OPERATOR = '/',
};