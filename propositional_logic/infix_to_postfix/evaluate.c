/* ALGORITHM FOR EVALUATION OF POSTFIX EXPRESSION:
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * SCAN THE EXPRESSION FROM LEFT TO RIGHT.
 *
 * 1. Read the element.
 *
 * 2. If the element is an operand then PUSH IT INTO STACK.
 *
 * 3. If the element is operator then {
 * 	POP TWO OPERATORS FROM THE STACK;
 * 	EVALUATE THE EXPRESSION FORMED BY THE TWO OPERANDS AND THE OPERATOR;
 * 	PUSH THE RESULT OF THE EXPRESSION IN THE STACK END;
 * }
 *
 * 4. If no-more elements then POP THE RESULT else GOTO STEP-1
 *
 */

#include<stdio.h>

typedef char* string;

extern int*stack;
extern int top;

int evaluate(string postfix) {
	top = -1;
	return 0;
}
