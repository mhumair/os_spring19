#include <stdio.h>
#include <stdlib.h>
/*
 * 
 * Implement a function with the following prototype:
 * 
 * student* list_students(int no_of_students);
 * 
 * The function should be made in a seperate file
 * 
 * 
 */

/*
 * The functions will have the following properties 
 * 
 * 1) creates n no of Students where each student will have 
 *              1) a name
 *              2) a Roll no
 *              3) a GPA
 * 2) allocates memory for those students from the heap
 * 
 * 3) print those students 
 * 
 * *** use the makefile to compile multiple source files
 * 
 * *** take no of students as cmd line arguments
 */

int main(int argc,char *argv[])
{
        int no_of_students = atoi(argv[1]);
        
        list_students(no_of_students);
        
        return 0;
}
