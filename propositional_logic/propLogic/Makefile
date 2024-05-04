files = intopost.o main.o precedence.o push_pop.o

run: $(files)
	gcc $(files) -o run

intopost.o: intopost.c functions.h
	gcc -c intopost.c

main.o: main.c functions.h
	gcc -c main.c

precedence.o: precedence.c
	gcc -c precedence.c

push_pop.o: push_pop.c
	gcc -c push_pop.c

.PHONY: clean

clean:
	-rm $(files) run
