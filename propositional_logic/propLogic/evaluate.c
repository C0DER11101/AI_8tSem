#include<stdio.h>

typedef char* string;

extern int top;
extern int*stack;

void evaluate(string postfix) {
	for(int i = 0; postfix[i] != '\0'; i++) {

		switch(postfix[i]) {
			case '~': case '^': case 'v': case 'V': case '>': case '-': // if it's an operator
				// check the type of operator(whether unary, binary or ternary)
				if(postfix[i] == '~') // unary
					break;
				// INCOMPLETE!!!
		}
	}
}
