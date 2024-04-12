// NOTE: the following program uses some concepts of heap

/*
	for a node, located at index i, its left child will be at index 2i and
	its right child will be at index 2i + 1
*/

// Implementing minimax on a given array of scores


#include<stdio.h>
#include<stdbool.h>

int Log2(int);
int minimax(int, int, bool, int*, int); // implement minimax algorithm

int main(void) {
	int scores[] = {3, 5, 2, 9, 12, 5, 23, 23};
	int n = sizeof(scores) / sizeof(scores[0]); // 8 elements are there in this array
	int h = Log2(n); // height of the tree

	/*
		in heap, the height of the heap is:
		log2(n + 1).
	*/

	int optimalVal;

	optimalVal = minimax(0, 0, true, scores, h); // first player is MAX
	printf("Optimal value = %d\n", optimalVal);

	return 0;
}

int Log2(int n) {
	return n == 1 ? 0 : 1 + Log2(n/2); // returns the height
}

int minimax(int depth, int nodeIndex, bool isMax, int scores[], int h) {
	int result;
	if(depth == h)
		return scores[nodeIndex];
	if(isMax) {
		int res1, res2;
		res1 = minimax(depth + 1, 2 * nodeIndex, false, scores, h); // moving to the right node
		res2 = minimax(depth + 1, 2 * nodeIndex + 1, false, scores, h); // moving to the left node

		result = res1 > res2 ? res1 : res2;
	}

	else {
		int res1, res2;
		res1 = minimax(depth + 1, 2 * nodeIndex, true, scores, h); // moving to the right node
		res2 = minimax(depth + 1, 2 * nodeIndex + 1, true, scores, h); // moving to the left node

		result = res1 < res2 ? res1 : res2;
	}

	return result;
}
