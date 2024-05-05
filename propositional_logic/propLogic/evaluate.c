/*
 * Algorithm for evaluating boolean postfix expression using stack
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 * Step-1: Scan the postfix expression from left to right.
 *
 * Step-2: If an operand is encountered, push it on to the stack.
 *
 * Step-3: If an operator is encountered then execute steps 4 to 6.
 *
 * Step-4: If it is a unary operator(e.g. NOT) then pop one element from the stack, if it is a binary operator(e.g. +, -, and, or, etc.)
   then pop two elements from the stack and if it is a ternary operator(e.g. conditional operator ? :)
   then pop three elements from the stack.
 *
 * Step-5: After popping the required number of elements calculate the result.
 *
 * Step-6: Push the result onto the stack.
*/

#include<stdio.h>

typedef char* string;

extern int top;
extern int*stack;

void evaluate(string postfix) {
	int op1, op2;
	for(int i = 0; postfix[i] != '\0'; i++) {

		switch(postfix[i]) {
			case '~': case '^': case 'v': case 'V': case '>': case '-': // if it's an operator
				// check the type of operator(whether unary, binary or ternary)
				if(postfix[i] == '~') { // unary
				}

				break;
				// INCOMPLETE!!!
		}
	}
}
