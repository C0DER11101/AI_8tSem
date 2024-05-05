#include<stdio.h>

typedef char* string;

#include "functions.h"

extern string postfix;

void intopost(string infix) {
	// scan the expression from left to right

	int precCurrOp;
	int idx = 0;
	int popped;

	for(int i = 0; infix[i] != '\0'; i++) {

		switch(infix[i]) {
			case '(':
				push(infix[i]);

				break;

			case '~':
				precCurrOp = precedence(infix[i]);

				while(precCurrOp <= precedence(peek()))
					postfix[idx++] = pop();
				push(infix[i]);

				break;

			case '^':
				precCurrOp = precedence(infix[i]);

				while(precCurrOp <= precedence(peek()))
					postfix[idx++] = pop();
				push(infix[i]);

				break;

			case 'v': case 'V':
				precCurrOp = precedence(infix[i]);

				while(precCurrOp <= precedence(peek()))
					postfix[idx++] = pop();
				push(infix[i]);

				break;

			case '>':
				precCurrOp = precedence(infix[i]);

				while(precCurrOp <= precedence(peek()))
					postfix[idx++] = pop();
				push(infix[i]);

				break;

			case '-':
				precCurrOp = precedence(infix[i]);

				while(precCurrOp <= precedence(peek()))
					postfix[idx++] = pop();
				push(infix[i]);

				break;
			case ')':
				popped = pop();

				while(popped != '(') {
					postfix[idx++] = popped;
					popped = pop();
				}
				
				break;

			default:
				postfix[idx++] = infix[i];
		}
	}

	popped = pop();

	while(popped != -1) {
		if(popped != '(' && popped != ')')
			postfix[idx++] = popped;
		popped = pop();
	}
}
