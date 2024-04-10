#include<stdio.h>
#include<stdlib.h>

int evaluate(int(*)[3]);
int minimax();

int main(void) {
	
	int board[3][3];

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			board[i][j] = 95;
	return 0;
}
