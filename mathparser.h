#ifndef MATHPARSER_H
#define MATHPARSER_H

#include <string>
#include <cmath>
#include <cctype>
#include <cstdlib>

class MathParser {
    std::string expr;
    int pos;
    double x_val;

    char peek() {
        while (pos < expr.length() && isspace(expr[pos])) pos++;
        if (pos == expr.length()) return 0;
        return expr[pos];
    }
    char get() {
        char c = peek();
        if (pos < expr.length()) pos++;
        return c;
    }
    double number() {
        int start = pos;
        if (peek() == 'x') { get(); return x_val; }
        while (isdigit(peek()) || peek() == '.') get();
        std::string numStr = expr.substr(start, pos - start);
        return numStr.empty() ? 0 : std::stod(numStr);
    }
    double factor() {
        if (isdigit(peek()) || peek() == '.' || peek() == 'x') return number();
        if (peek() == '(') { get(); double res = expression(); get(); return res; }
        if (peek() == '-') { get(); return -factor(); }
        if (isalpha(peek())) {
            int start = pos;
            while (isalpha(peek())) get();
            std::string func = expr.substr(start, pos - start);
            get(); double arg = expression(); get();
            if (func == "sin") return sin(arg);
            if (func == "cos") return cos(arg);
            if (func == "tan") return tan(arg);
            if (func == "sqrt") return sqrt(arg);
            if (func == "exp") return exp(arg);
            if (func == "ln") return log(arg);
            if (func == "log") return log10(arg);
        }
        return 0;
    }
    double term() {
        double result = factor();
        while (peek() == '*' || peek() == '/' || peek() == '^') {
            char op = get();
            double rhs = factor();
            if (op == '*') result *= rhs;
            else if (op == '/') result /= rhs;
            else if (op == '^') result = pow(result, rhs);
        }
        return result;
    }
    double expression() {
        double result = term();
        while (peek() == '+' || peek() == '-') {
            char op = get();
            double rhs = term();
            if (op == '+') result += rhs;
            else if (op == '-') result -= rhs;
        }
        return result;
    }
public:
    double evaluate(std::string equation, double x) {
        this->expr = equation;
        this->pos = 0;
        this->x_val = x;
        return expression();
    }
};

#endif // MATHPARSER_H
