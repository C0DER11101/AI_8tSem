#include<stdio.h>
#include<stdlib.h>

typedef struct vertex { // vertex will have 3 states: initial, visited, finished
	int state:2;
	int value;
}vertex;

void dfs(vertex*, int, int[][100], int);

int main(void) {

	int numVert;
	printf("enter number of vertices: ");
	scanf("%d", &numVert);

	vertex Vertex[numVert];

	int adjMat[100][100];

	for(int i = 0; i < numVert; i++) {
		Vertex[i].state = 0; // initial state
		Vertex[i].value = i;
	}

	puts("connect the vertices:");

	int v1, v2;

	while(v1 != -1 && v2 != -1) {
		printf("Edge: ");
		scanf("%d%d", &v1, &v2);

		if((v1 == -1 || v2 == -1) || (v1 >= numVert || v2 >= numVert))
			break;

		adjMat[v1][v2] = 1;
	}

	dfs(Vertex, 0, adjMat, numVert);

	return 0;
}

void dfs(vertex*Vertex, int idx, int adjMat[][100], int numV) {

	printf("%d\n", Vertex[idx].value);
	Vertex[idx].state = 1; // visited state

	for(int i = 0; i < numV; i++)
		if(adjMat[idx][i] == 1 && Vertex[i].state == 0)
			dfs(Vertex, i, adjMat, numV);

	Vertex[idx].state = 2; // finished state
}
