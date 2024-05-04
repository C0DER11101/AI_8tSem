#include<stdio.h>

extern int top;
extern int*stack;

void push(int symbol) {
	stack[++top] = symbol;
}

int pop() {

	if(top == -1)
		return -1;

	return stack[top--];
}

int peek() {
	return stack[top];
}
