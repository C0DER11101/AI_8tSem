#include<stdio.h>

typedef struct vertex {
	unsigned state: 1;
	int value;
}vertex;

int top;

void dfs(vertex*, int[100][100], int);

vertex*pop(vertex**);
void push(vertex**, vertex*, int);


int main(void) {

	int numVert;

	printf("enter number of vertices: ");
	scanf("%d", &numVert);

	vertex Vertex[numVert];

	int vert1, vert2;

	int adjMat[100][100];

	for(int i = 0; i < numVert; i++) {
		Vertex[i].value = i;
		Vertex[i].state = 0; // initial state
	}

	puts("Connect the vertices:");

	while(1) {
		printf("Enter two vertices to connect: ");
		scanf("%d%d", &vert1, &vert2);

		if(vert1 == -1 || vert2 == -1) {
			puts("stopping...");
			break;
		}

		adjMat[vert1][vert2] = 1;
		//adjMat[vert2][vert1] = 1;
	}

	dfs(Vertex, adjMat, numVert);

	return 0;
}

void dfs(vertex*Vertex, int adjMat[100][100], int numV) {
	vertex*stack[numV];

	int count = 0;

	vertex *source = &Vertex[0]; // source vertex
	printf("%d\n", source->value);

	source->state = 1; // change the state to visited

	while(top >= 0) {
		for(int i = 0 ; i < numV; i++)
			if(adjMat[source->value][Vertex[i].value] == 1 && Vertex[i].state == 0)
				push(stack, &Vertex[i], numV);
		source = pop(stack);
		if(source) {
			printf("%d\n", source->value);
			source->state = 1; // changing the state to visited
		}
		else
			return;
	}
}

void push(vertex**stack, vertex*Vertex, int numV) {
	if(top == numV)
		return;

	stack[top++] = Vertex;
}

vertex*pop(vertex**stack) {
	if(top <= 0)
		return NULL;

	return stack[--top];
}
