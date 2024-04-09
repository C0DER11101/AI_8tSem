// Implementing an evaluation function/heuristic function.

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<Co.h>

int evaluate(int[3][3]);
int place_xo(int[3][3], int);
void showBoard(int[3][3]);

int main(void) {

	srand(time(NULL)); // seeding a value for generating different random numbers each time

	int board[3][3]; // taking a 3x3 board for tic-tac-toe
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			board[i][j] = 95;
	int winner;

	//printf("%d\n", 1 + rand() % 10); // generate random numbers between 1 and 10(both inclusive)

	int turns = 0; // 0 indicates the player's turn

	while(true) {
		if(turns == 0)
			showBoard(board);
		turns = place_xo(board, turns);
		winner = evaluate(board);

		if(winner == 10 || winner == -10)
			break;
	}

	if(winner == 10)
		puts("You won!");
	else if(winner == -10)
		puts("Computer won!");
	else
		puts("It's a tie");
	
	return 0;
}

int evaluate(int board[3][3]) {
	for(int i = 0; i < 3; i++) {
		// checking winner row-wise
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) {// checking in row
			if(board[i][0] == 'x')
				return 10; // if player wins
			if(board[i][0] == 'o')
				return -10; // if computer wins
		}
	}

	for(int j = 0; j < 3; j++) {
		// checking winner column-wise
		if(board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
			if(board[0][j] == 'x')
				return 10;
			if(board[0][j] == 'o')
				return -10;
		}
	}

	// checking winner diagonally
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		if(board[0][0] == 'x')
			return 10;
		if(board[0][0] == 'o')
			return -10;
	}

	if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		if(board[0][2] == 'x')
			return 10;
		if(board[0][2] == 'o')
			return -10;
	}

	return 0; // if none have won
}

int place_xo(int board[3][3], int turn) {
	int posR, posC;
	// player's turn
	if(turn == 0) {
userInp:
		printf("Enter position: ");
		scanf("%d%d", &posR, &posC);

		if(board[posR][posC] == 'x' || board[posR][posC] == 'o') {
			printf("That place is already occupied! Please choose another position.");
			goto userInp;
		}
		board[posR][posC] = 'x';

		turn = 1; // set turn to computer's turn
	}

	// computer's turn
	else {
		// generate value between 0 and 2(both inclusive)
compInp:
		posR = 0 + rand() % 2;
		posC = 0 + rand() % 2;
		
		if(board[posR][posC] == 'x' || board[posR][posC] == 'o')
			goto compInp;
		board[posR][posC] = 'o';

		turn = 0;
	}

	return turn;
}

void showBoard(int board[3][3]) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			printf("%c ", board[i][j]);
		printf("\n");
	}
}
