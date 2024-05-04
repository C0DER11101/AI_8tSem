#include<stdio.h>

extern int top;
extern int*stack;

void push(int symbol) {
	stack[++top] = symbol;
	printf("TOP: %d\n", top);
	printf("TOP[%d]\n", stack[top]);
}

int pop() {
	if(top != -1)
		return stack[top--];
	else
		return -1;
}
