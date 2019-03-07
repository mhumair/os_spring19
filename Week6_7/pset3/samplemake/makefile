all: sample

sample: functions.o hello.o
	gcc -o sample hello.o functions.o 
	
funtions.o: functions.c functions.h
	gcc -c functions.c
	
hello.o : hello.c functions.h
	gcc -c hello.c

clean:
	rm -f *.o sample	
	
run:
	./sample
