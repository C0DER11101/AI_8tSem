#include<stdio.h>
#include<stdbool.h>
#include "functions.h"
#include "constants.h"

extern const Score score;

int minimax(int*board, int depth, bool isMax) { // it is more like recursive graph traversal using DFS rather than a binary tree traversal
	
	// checking if the game is over
	int result = evaluate(board);
	if(result != 101) { // base case
		if(result == score.win)
			return score.win;
		if(result == score.tie)
			return score.tie;
		if(result == score.lose)
			return score.lose;
	}
	
	int best_score;

	// Max's turn
	if(isMax) {
		int bestScore = -INF;
		int score;
		// check for an empty space in the board
		for(int i = 0; i < 9; i++) { // this part is like recursive DFS
			if(board[i] == '_') {
				board[i] = ai;
				score = minimax(board, depth + 1, false);
				board[i] = '_';

				if(score > bestScore)
					bestScore = score; // max(score, bestScore);
			}
		}

		best_score = bestScore;
	}

	// Min's turn(ai's turn)
	else {
		int bestScore = INF;
		int score;
		// check for an empty space in the board
		for(int i = 0; i < 9; i++) {
			if(board[i] == '_') {
				board[i] = human; // this is how I understand this line, ai is assigning this position to us
				score = minimax(board, depth + 1, true);
				board[i] = '_'; // restoring this board position

				if(score < bestScore)
					bestScore = score; // min(score, bestScore);
			}
		}

		best_score = bestScore;
	}

	return best_score;
}
