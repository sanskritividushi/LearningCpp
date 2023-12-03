//WAP TO TRNASFORM INFIX TO POSTFIX
#include <iostream>
#define max 10
using namespaces std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(int op1, int op2, char operation)
{
    switch (operation)
    {
    case '+':
        return op1 + op2;

    case '-':
        return op1 - op2;

    case '*':
        return op1 * op2;

    case '/':
        if (op2 == 0)
        {
            cout << "Division by zero" << endl;
            return -1;
        }
        return op1 / op2;

    default:
        cout << "invalid operation" << endl;
    }
}

int evaluatePostfix(string s){
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i])){
            push(s[i] - '0');
        }
        else if (isOperator(s[i]))
        {
            int a = stack[tos];
            pop();
            int b = stack[tos];
            pop();

            int result = performOperation(b, a, s[i]);
            push(result);
        }
    }

    // is size of stack becomes 1, then it is the result
    if (size() == 1){
        return stack[tos];
    }
    else{
        cout << "invalid expression" << endl;
        return -1;
    }
}
string infixToPostfix(string s){
    string result = "";

    for (int i = 0; i < s.length(); i++){
        if (isalpha(s[i])){
            result += s[i];
        }

        else if (s[i] == '('){
            push(s[i]);
        }

        else if (s[i] == ')'){
            while (stack[tos] != '('){
                result += stack[tos];
                pop();
            }
            pop();
        }

        else if (isOperator(s[i])){
            if (tos == -1){
                push(s[i]);
            }

            else if (stack[tos] == '('){
                push(s[i]);
            }

            else if (stack[tos] == '+' || stack[tos] == '-'){
                if (s[i] == '*' || s[i] == '/'){
                    push(s[i]);
                }

                else{
                    result += stack[tos];
                    pop();
                    push(s[i]);
                }
            }

            else if (stack[tos] == '*' || stack[tos] == '/'){
                result += stack[tos];
                pop();
                push(s[i]);
            }
        }
    }
    while (tos != -1){
        result += stack[tos];
        pop();
    }
    return result;
}
int evaluatePrefix(string s)
{
    // evaluate prefix expression
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            push2(s[i] - '0');
        }

        else if (isOperator(s[i]))
        {
            int op1 = stack2[tos];
            pop2();
            int op2 = stack2[tos];
            pop2();

            int result = performOperation(op1, op2, s[i]);
            push2(result);
        }
    }

    // is size of stack becomes 1, then it is the result
    if (tos == 0)
    {
        return stack2[tos];
    }

    else
    {
        cout << "invalid expression" << endl;
        return -1;
    }
}
string infixToPrefix(string s){
    string result = "";

    for (int i = s.length() - 1; i >= 0; i--){
        if (isdigit(s[i])){
            result += s[i];
        }

        if (s[i] == ')'){
            push(s[i]);
        }

        else if (s[i] == '('){
            while (stack[tos] != ')'){
                result += stack[tos];
                pop();
            }
            pop();
        }

        else if (isOperator(s[i])){
            if (tos == -1){
                push(s[i]);
            }

            else if (stack[tos] == ')'){
                push(s[i]);
            }

            else if (stack[tos] == '+' || stack[tos] == '-'){
                push(s[i]);
            }

            else if (stack[tos] == '*' || stack[tos] == '/'){
                if (s[i] == '+' || s[i] == '-'){
                    result += stack[tos];
                    pop();
                    push(s[i]);
                }

                else{
                    push(s[i]);
                }
            }
        }
    }
    while (tos != -1){
        result += stack[tos];
        pop();
    }
    return reverseString(result);
}
