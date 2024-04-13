#include<stdio.h>

int evaluate(int* board) {
	// checking row-wise
	for(int i = 0; i < 9; i += 3) {
		if(board[i] == board[i + 1] && board[i + 1] == board[i + 2]) {
			if(board[i] == 'x')
				return 1;
			if(board[i] == 'o')
				return -1;
		}
	}

	// checking column-wise
	for(int i = 0; i < 3; i++) {
		if(board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
			if(board[i] == 'x')
				return 1;
			if(board[i] == 'o')
				return -1;
		}
	}

	// checking diagonally
	if(board[2] == board[4] && board[4] == board[6]) {
		if(board[2] == 'x')
			return 1;
		if(board[2] == 'o')
			return -1;
	}

	if(board[0] == board[4] && board[4] == board[8]) {
		if(board[0] == 'x')
			return 1;
		if(board[0] == 'o')
			return -1;
	}

	return 0; // draw
}
