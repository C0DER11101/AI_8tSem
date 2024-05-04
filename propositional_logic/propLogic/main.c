#include<stdio.h>

typedef char* string;

int top = -1;
int*stack;

int main(void) {
	string expression;

	expression = calloc(1000, sizeof(char));

	printf("enter an expression: ");
	scanf("%s", expression);

	stack = calloc(strlen(expression), sizeof(int));
	return 0;
}
