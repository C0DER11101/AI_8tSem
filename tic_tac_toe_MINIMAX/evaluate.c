// evaulate the states of the board, whether it's a win state, lose state or a tie state

#include<stdio.h>
#include "constants.h"

extern Score score;

int evaluate(int* board) {
	// checking row-wise
	for(int i = 0; i < 9; i += 3) {
		if(board[i] == board[i + 1] && board[i + 1] == board[i + 2]) {
			if(board[i] == ai)
				return score.win;
			if(board[i] == human)
				return score.lose;
		}
	}

	// checking column-wise
	for(int i = 0; i < 3; i++) {
		if(board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
			if(board[i] == ai)
				return score.win;
			if(board[i] == human)
				return score.lose;
		}
	}

	// checking diagonally
	if(board[2] == board[4] && board[4] == board[6]) {
		if(board[2] == ai)
			return score.win;
		if(board[2] == human)
			return score.lose;
	}

	if(board[0] == board[4] && board[4] == board[8]) {
		if(board[0] == ai)
			return score.win;
		if(board[0] == human)
			return score.lose;
	}

	// check if the board has empty spaces(that is the game isn't over yet)
	for(int i = 0; i < 9; i++)
		if(board[i] == '_')
			return 101;

	return score.tie; // draw(this will be executed only if the board doesn't have any empty spaces)
}
