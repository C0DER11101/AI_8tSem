#include<stdio.h>

int showBoard(void) {
	int board[9];
	for(int i = 0; i < 9; i++)
		board[i] = '_';

	for(int i = 0; i < 9; i += 3) {
		for(int j = i; j < (3 + i); j++)
			printf("%c  ", board[j]);
		printf("\n\n");
	}
	return 0;
}
