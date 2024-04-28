#include<stdio.h>

typedef char* string;

#include "functions.h"

extern int*stack;
extern int top;
extern string postfix;

void intopost(string infix) {

	int postI = 0;

	int popped = '\0';

	int predTop; // precedence of the operator on the top of the stack
	int predOp; // precedence of the operator that we are going to push into the stack

	for(int i = 0; infix[i] != '\0'; i++) { // Scan the infix expression from left to right
		switch(infix[i]) {

			case '(': // if '(' then push into stack
				push(infix[i]);
				break;

			case '+': case '-': case '*': case '/': case '^': // if operator
				predTop = precedence(stack[top]); // check the precedence of stack's top
				predOp = precedence(infix[i]); // also check the precedence of the operator

				if(predOp > predTop) // if the precedence of operator > precedence of stack top, then push
					push(infix[i]);
				else { // if the precedence of the operator <= precedence of stack top, then repeatedly pop
					while(predOp <= precedence(stack[top])) // until predOp > precedence(stack[top])
						postfix[postI++] = pop();

					push(infix[i]); // then push the operator into the stack
				}

				break;

			case ')': // if the operator is ')'
				popped = pop();
				while(popped != '(') { // repeatedly pop from the stack until '(' is encountered in the stack
					postfix[postI++] = popped;
					popped = pop();
				}

				break;

			default:
				postfix[postI++] = infix[i];

		}
	}

	popped = pop();
	while(popped != -1) { // when scanning the infix expression from left to right is over, then empty the stack
		postfix[postI++] = popped;
		popped = pop();
	}
}
