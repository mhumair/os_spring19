#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    /*
     *malloc : Allocating memory from the heap
     */
    int *somevar = malloc(sizeof(int));
    int *somevar1 = malloc(sizeof(int));
    int *somevar2 = malloc(sizeof(int));
    int *somevar3 = malloc(sizeof(int));
    *somevar = 4500;
    /*
     * free : free memory from the heap
     * Use valgrind to check for memory leaks
     * 
     * $gcc -g executablename
     * 
     * $valgrind executablename
     * 
     * dollar sign denotes the terminal prompt 
     * 
     */
    free(somevar);
    free(somevar1);
    free(somevar2);
    free(somevar3);
    printf("The value is %d\n",*somevar);
}
