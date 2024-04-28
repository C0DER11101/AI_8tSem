#include<stdio.h>

int precedence(int operator) {
	switch(operator) {
		case '^':
			return 3; // highest precedence

		case '*': case '/':
			return 2;

		case '+': case '-':
			return 1;

		default:
			return 0; // if it's a parenthesis or an operand
	}
}
