#pragma once
#include <exception>
#include <string>

using std::exception;
using std::string;

class Calculator final{
public:
    /**
     * @brief Get the quotient of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param calculationOperator  [IN]    The calculation operator
     * @param secondNumber         [IN]    The second number
     * @return                             The quotient of the two numbers
     */
    double calculate(double firstNumber, char calculationOperator, double secondNumber);

private:
    /**
     * @brief Get the sum of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The sum of the two numbers
     */
    double add(double firstNumber, double secondNumber);

    /**
     * @brief Get the difference of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The difference of the two numbers
     */
    double subtract(double firstNumber, double secondNumber);

    /**
     * @brief Get the multiply of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The multiply of the two numbers
     */
    double multiply(double firstNumber, double secondNumber);

    /**
     * @brief Get the quotient of two numbers
     *
     * @param firstNumber          [IN]    The first number
     * @param secondNumber         [IN]    The second number
     * @return                             The quotient of the two numbers
     */
    double divide(double firstNumber, double secondNumber);
};

class calculatorError final: public exception {
public:
    calculatorError(string error) : m_error(error){};
    const char* what() const noexcept override {
        return m_error.c_str();
    }

private: 
    string m_error;
};

enum class Operator: char { 
    ADD_OPERATOR = '+',
    SUBTRACT_OPERATOR = '-',
    MULTIPLY_OPERATOR = '*',
    DIVIDE_OPERATOR = '/',
};