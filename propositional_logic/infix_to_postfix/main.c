/* Algorithm:
 * ~~~~~~~~~~
 *
 * 1. Push "(" onto the stack, and add ")" to the end of the arithmetic expression.
 *
 * 2. Scan the arithmetic expression from left to right and repeat steps 3 to 6 for each element of the arithmetic expression until
 * the stack is empty.
 * 3. If an operand is encountered, add it to the postfix expression.
 *
 * 4. If a left parenthesis is encountered, push it onto stack.
 *
 * 5. If an operator is encountered, then:
 * (a) Repeatedly pop from the stack and add to the postfix expression each operator which has the same or higher precedence
 * than the operator.
 * (b) Add operator to the stack.
 *
 * 6. If a right parenthesis is encountered, then:
 * (a) Repeatedly pop from the stack and add to the postfix expression each operator until a left parenthesis is encountered.
 * (b) Remove the left parenthesis. Donot add it to the postfix expression.
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef char* string;

#include "constants.h"
#include "functions.h"

int main(void) {

	postfix = calloc(100, sizeof(char));

	string infix;

	infix = calloc(100, sizeof(char));

	printf("enter an infix expression: ");
	scanf("%[^\n]%*c", infix);

	stack = calloc(strlen(infix),sizeof(int));

	intopost(infix);

	printf("Postfix expression: %s\n", postfix);

	free(infix);

	free(postfix);

	return 0;
}
