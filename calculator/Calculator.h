#pragma once
#include <exception>
#include <string>

using std::exception;
using std::string;

class Calculator {
public:
    /**
     * @brief Get the quotient of two numbers
     *
     * @param first_number          [IN]    The first number
     * @param calculation_operator  [IN]    The calculation operator
     * @param second_number         [IN]    The second number
     * @return                              The quotient of the two numbers
     */
    double calculate(double first_number, char calculation_operator, double second_number);

private:
    /**
     * @brief Get the sum of two numbers
     *
     * @param first_number          [IN]    The first number
     * @param second_number         [IN]    The second number
     * @return                              The sum of the two numbers
     */
    double add(double first_number, double second_number);

    /**
     * @brief Get the difference of two numbers
     *
     * @param first_number          [IN]    The first number
     * @param second_number         [IN]    The second number
     * @return                              The difference of the two numbers
     */
    double subtract(double first_number, double second_number);

    /**
     * @brief Get the multiply of two numbers
     *
     * @param first_number          [IN]    The first number
     * @param second_number         [IN]    The second number
     * @return                              The multiply of the two numbers
     */
    double multiply(double first_number, double second_number);

    /**
     * @brief Get the quotient of two numbers
     *
     * @param first_number          [IN]    The first number
     * @param second_number         [IN]    The second number
     * @return                              The quotient of the two numbers
     */
    double divide(double first_number, double second_number);
};

class calculatorError: public exception {
public:
    calculatorError(string error) : m_error(error){};
    const char* what() const noexcept override {
        return m_error.c_str();
    }

private: 
    string m_error;
};

enum operators { 
    ADD_OPERATOR = '+',
    SUBTRACT_OPERATOR = '-',
    MULTIPLY_OPERATOR = '*',
    DIVIDE_OPERATOR = '/',
};