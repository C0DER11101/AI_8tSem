files = main.o precedence.o push_pop.o intopost.o evaluate.o

run: $(files)
	gcc $(files) -o run

main.o: main.c functions.h constants.h
	gcc -c main.c

precedence.o:
	gcc -c precedence.c

push_pop.o: 
	gcc -c push_pop.c

intopost.o: functions.h
	gcc -c intopost.c

evaluate.o: functions.h
	gcc -c evaluate.c

.PHONY: clean

clean:
	-rm $(files) run
