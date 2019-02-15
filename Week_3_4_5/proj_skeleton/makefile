all: samplehello

samplehello: samplehello.o samplehello_functions.o
	gcc -o samplehello samplehello.o samplehello_functions.o

samplehello.o: samplehello.c samplehello_functions.h
	gcc -c samplehello.c

samplehello_functions.o: samplehello.c samplehello_functions.h
	gcc -c samplehello_functions.c

clean:
	-rm samplehello samplehello.o samplehello_functions.o
