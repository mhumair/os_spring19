all: program

program: main.o function1.o function2.o function3.o
	gcc -o program main.o function1.o function2.o function3.o 

function3.o: function3.c function_headers.h
	gcc -c function3.c

function2.o: function2.c function_headers.h
	gcc -c function2.c
	
function1.o: function1.c function_headers.h
	gcc -c function1.c
	
main.o: main.c
	gcc -c main.c
	
clean:
	rm -f *.o program
