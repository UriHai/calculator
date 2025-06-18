#pragma once
#include <exception>
#include <string>

using std::exception;
using std::string;

class Calculator {
public:
    double calculate(double first_number, char calculation_operator, double second_number);

private:
    double add(double first_number, double second_number);
    double subtract(double first_number, double second_number);
    double multiply(double first_number, double second_number);
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