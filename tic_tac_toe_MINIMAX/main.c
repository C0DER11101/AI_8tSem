// tic-tac-toe


#include<stdio.h>
#include<stdlib.h>

typedef struct moves {
	int xpos;
	int ypos;
	int score;
}moves;

int main(void) {
	int pos;
	int board[9];
	for(int i = 0; i < 9; i++)
		board[i] = '_';

	while(1) {
		printf("enter position for \'x\'(0-8): ");
		scanf("%d", &pos);

		if(board[pos] != '_') {
			puts("Occupied! Enter again");
			continue;
		}

		minimax(board, true); // maximizing player

	}

	return 0;
}
