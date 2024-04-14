#include<stdio.h>

void showBoard(int*board) {
	for(int i = 0; i < 9; i += 3) {
		for(int j = i; j < (3 + i); j++)
			printf("%c    ", board[j]);
		printf("\n\n\n\n");
	}
}
