// tic-tac-toe using minimax

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "constants.h"
#include "functions.h"

const Score score = {
	.win = 1,
	.tie = 0,
	.lose = -1
};

int main(void) {
	int pos;
	int result;
	int board[9];
	char*outcome;
	for(int i = 0; i < 9; i++)
		board[i] = '_';

	showBoard(board);

	while(1) {
		printf("enter position for \'o\'(0-8): ");
		scanf("%d", &pos);

		if(pos > 8 || pos < 0) {
			puts("Enter a valid position");
			continue;
		}

		else if(board[pos] != '_') {
			puts("Occupied! Enter again");
			continue;
		}

		system("clear");
		


		board[pos] = human;


		result = evaluate(board);

		if(result != 101) {
			if(result == score.win) {
				outcome = "I won\n";
				break;
			}

			if(result == score.tie) {
				outcome = "Tie!\n";
				break;
			}

			if(result == score.lose) {
				outcome = "I lost\n";
				break;
			}
		}

		// determining the best position in the board
		bestPos(board);

		showBoard(board);
	}

	system("clear");

	showBoard(board);
	printf("%s", outcome);

	return 0;
}
