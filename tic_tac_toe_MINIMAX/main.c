#include<stdio.h>
#include<stdlib.h>

int evaluate(int(*)[3]);
int minimax();

int main(void) {
	
	int board[3][3];

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			board[i][j] = '_';
	int scores[] = {-1, 0, 1};
	/* -1 -> machine wins the game
	   0  -> tie
	   1  -> user wins the game
	 */
	
	int xPos, yPos;

	while(1) {

		printf("user: ");
		scanf("%d%d", &xPos, &yPos);

		if((xPos > 0 && xPos < 3) || (yPos > 0 && yPos < 3)) {
			puts("Invalid coordinates!");
			continue;
		}

		board[xPos][yPos] = 'x';
	}

	return 0;
}
