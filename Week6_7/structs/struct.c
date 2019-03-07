#include <stdio.h>
/*
 * 
 * The following program allocates memory for a structure from the stack 
 * 
 */
struct Car{
    
        int year;
        
        char *model;
        
        char *noplate;
        
        char gears;
        
} ;


int main(void)
{

        struct Car normalcar ;
        
        normalcar.model ="UNIQUE";
        
        normalcar.noplate="7929";
        
        normalcar.gears='4';
        
        printf("The model of the car is %s\n",normalcar.model);
        
        return 0;
}
