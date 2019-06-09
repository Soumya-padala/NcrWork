#include<string>
#include<stack>
#include<iostream>
using namespace std;

double division(double, double);
double add(double, double);
double sub(double, double);
double mul(double, double);

// Function to find precedence of  operators. 
int precedence(char op) {
	if (op == '+' || op == '-')
		return 1;
	if (op == '*' || op == '/')
		return 2;
	return 0;
}

// Function to calculate. 
double calculate(int a, int b, char op) {
	switch (op) {
	case '+': return add(a, b);
	case '-': return sub(a, b);
	case '*': return mul(a, b);
	case '/': return division(a, b);
	}
}

// Function to return expression
extern int evaluate(string tokens) {
	int i;

	// stack to store integer values. 
	stack <int> values;

	// stack to store operators. 

	stack <char> ops;

	for (i = 0; i < tokens.length(); i++) {
		//skip if spaces
		if (tokens[i] == ' ')
			continue;

		// push open bracket to ops stack  
		 else if (tokens[i] == '(') 
		 {
			ops.push(tokens[i]);
		 }

		// if number push to values stack 
		 
		 
		 else if (isdigit(tokens[i])) {
			int val = 0;

			// if more than one digit in number. 
			while (i < tokens.length() &&
				isdigit(tokens[i]))
			{
				val = (val * 10) + (tokens[i] - '0');
				i++;
			}
			i--;

			values.push(val);
		}

		// closed bracket then perform
		else if (tokens[i] == ')')
		{
			while (!ops.empty() && ops.top() != '(')
			{
				int val2 = values.top();
				values.pop();

				int val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();

				values.push(calculate(val1, val2, op));
			}

			// pop opening brace. 
			ops.pop();
		}

		// Current token is an operator. 
		else
		{
			//if same precedence. 
			while (!ops.empty() && precedence(ops.top())>= precedence(tokens[i])) {
				int val2 = values.top();
				values.pop();

				int val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();

				values.push(calculate(val1, val2, op));
			}

			// Push current token to 'ops'. 
			ops.push(tokens[i]);
		}

	}

	// evaluate remaining expression. 
	while (!ops.empty()) {
		int val2 = values.top();
		values.pop();

		int val1 = values.top();
		values.pop();

		char op = ops.top();
		ops.pop();

		values.push(calculate(val1, val2, op));
	}
	return values.top();    // value of top is result
}