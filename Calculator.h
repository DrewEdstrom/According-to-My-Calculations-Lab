#ifndef CALCULATOR_H_INC
#define CALCULATOR_H_INC

#include <stack>
#include "Shunting-YardAlgorithm.h"

class Calculator
{
    public:
    Calculator();

    //change the expression
    std::stack<char> infix_expression_to_postfix_stack(std::string infix_expression);
    //evaluate the expression
    double evaluate(std::string expression);
    //determines whether a character is a mathematical operator (only +, -,
    //*, /)
    bool is_operator(char c);

};

#endif
