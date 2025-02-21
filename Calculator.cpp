#include <sstream>
#include "Calculator.h"

using namespace std;

Calculator::Calculator()
{
}

stack<char> Calculator::infix_expression_to_postfix_stack(string infix_expression)
{
    //passed expression is assumed to be infix, so it is converted to
    //postfix
    string postfix_expression{infixToPostfix(infix_expression)};
    //the postfix expression represented as a stack
    stack<char> expression;

    //removes spaces from the postfix expression as to avoid the wasteful
    //storing of those
    for(int i = static_cast<int>(postfix_expression.length()) - 1; i >= 0; i--)
    {
        if(postfix_expression[i] != ' ')
        {
            expression.push(postfix_expression[i]);
        }
    }

    return expression;
}

//evaluate the expression
double Calculator::evaluate(string infix_expression)
{
    //expression stack
    stack<char> expression(infix_expression_to_postfix_stack(infix_expression));
    //the stack which we do the evaluating in
    stack<double> temp;
    double num1;
    double num2;

    //do until the expression is fully evaluated
    while(!expression.empty())
    {
        //push numbers to the temp stack
        if(!is_operator(expression.top()))
        {
            temp.push(static_cast<double>(expression.top() - '0'));
        }
        //when operators are encountered, evaluate the previous numbers in
        //the temp stack
        else
        {
            num1 = temp.top();
            temp.pop();
            num2 = temp.top();
            temp.pop();

            if(expression.top() == '*')
            {
                temp.push(num2 * num1);
            }
            else if(expression.top() == '/')
            {
                temp.push(num2 / num1);
            }
            else if(expression.top() == '+')
            {
                temp.push(num2 + num1);
            }
            else if(expression.top() == '-')
            {
                temp.push(num2 - num1);
            }
        }
        expression.pop();
    }
    
    return temp.top();
}

bool Calculator::is_operator(char c)
{
    return c == '*' || c == '/' || c == '+' || c == '-';
}

