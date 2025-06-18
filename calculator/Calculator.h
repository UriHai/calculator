#pragma once

class Calculator {
public:
    double calculate(double first_number, char calculation_operator, double second_number);

private:
    double add(double first_number, double second_number);
    double subtract(double first_number, double second_number);
    double multiply(double first_number, double second_number);
    double divide(double first_number, double second_number);
};

enum class calculatorErrors {
    ZERO_DIVISION = 0,
    UNKOWN_OPERATOR = 1,
};

enum operators { 
    ADD_OPERATOR = '+',
    SUBTRACT_OPERATOR = '-',
    MULTIPLY_OPERATOR = '*',
    DIVIDE_OPERATOR = '/',
};