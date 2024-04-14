objects = main.o evaluate.o minimax.o bestMove.o showBoard.o

run: $(objects)
	gcc $(objects) -o run

main.o: main.c constants.h functions.h
	gcc -c main.c

bestMove.o: bestMove.c constants.h
	gcc -c bestMove.c

evaluate.o: evaluate.c constants.h
	gcc -c evaluate.c

minimax.o: minimax.c constants.h
	gcc -c minimax.c

.PHONY: clean

clean:
	-rm $(objects) run
