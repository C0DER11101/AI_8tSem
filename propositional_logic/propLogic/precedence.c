#include<stdio.h>

int precedence(int symbol) {
	switch(symbol) {
		case '~': // negation
			return 5;
		case '^': // conjunction
			return 4;
		case 'v': case 'V':// disjunction
			return 3;
		case '>': // implication
			return 2;
		case '-': // biconditional
			return 1;
	}

	return 0;
}
