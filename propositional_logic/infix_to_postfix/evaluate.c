/* ALGORITHM FOR EVALUATION OF POSTFIX EXPRESSION:
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * SCAN THE EXPRESSION FROM LEFT TO RIGHT.
 *
 * 1. Read the element.
 *
 * 2. If the element is an operand then PUSH IT INTO STACK.
 *
 * 3. If the element is operator then {
 * 	POP TWO OPERANDS FROM THE STACK;
 * 	EVALUATE THE EXPRESSION FORMED BY THE TWO OPERANDS AND THE OPERATOR;
 * 	PUSH THE RESULT OF THE EXPRESSION IN THE STACK END;
 * }
 *
 * 4. If no-more elements then POP THE RESULT else GOTO STEP-1
 *
 */

#include<stdio.h>

typedef char* string;
#include "functions.h"

typedef char* string;

extern int*stack;
extern int top;

int evaluate(string postfix) {
	int op1, op2, result; // operands and result
	top = -1;

	for(int i = 0; postfix[i] != '\0'; i++) {
		switch(postfix[i]) {
			case '+': case '-': case '*': case '/':
				op1 = pop();
				op2 = pop();
				result = calculate(op1, op2, postfix[i]);
				push(result);
				break;
			default:
				push(postfix[i]);
		}
	}

	return stack[top];
}

int calculate(int _1, int _2, char symbol) {

	if(_1 >= 48 && _1 <= 57)
		_1 = _1 - '0';
	if(_2 >= 48 && _2 <= 57)
		_2 = _2 - '0';

	switch(symbol) {
		case '-':
			return _2 - _1;
		case '+':
			return _2 + _1;
		case '*':
			return _2 * _1;
		case '/':
			return _2 / _1;
	}

	return 0;
}
