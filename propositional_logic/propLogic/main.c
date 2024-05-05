#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef char* string;
#include "functions.h"

int top = -1;
int*stack;
string postfix;
int(*bools)[3];

int main(void) {
	string expression;

	expression = calloc(1000, sizeof(char));
	postfix = calloc(1000, sizeof(char));

	printf("enter an expression: ");
	scanf("%s", expression);

	stack = calloc(strlen(expression), sizeof(int));

	intopost(expression);

	printf("Postfix expression: %s\n", postfix);

	free(expression);
	free(stack);
	free(postfix);

	return 0;
}
