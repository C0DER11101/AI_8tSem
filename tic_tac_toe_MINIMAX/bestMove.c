// get the best move


#include<stdio.h>
#include<stdbool.h>
#include "functions.h"
#include "constants.h"

void bestPos(int*board) {
	int move;
	int bestScore = -INF;
	int score;
	for(int i = 0; i < 9; i++) {
		if(board[i] == '_') { // checking for an empty space
			board[i] = ai;
			score = minimax(board, 0, false); // we are the maximizing player
			board[i] = '_'; // restoring the position
			if(score > bestScore) { // set the bestScore to the score that is greater than bestScore
				bestScore = score;
				move = i; // if we get a new best score that the position where we got that new best score is the best position
			}
		}
	}

	board[move] = ai;
}
