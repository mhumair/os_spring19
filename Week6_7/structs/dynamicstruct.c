#include <stdio.h>
#include "function_headers.h"
/*
 * 
 * The following program allocates memory for a structure from the heap
 * 
 */
int main(void)
{

        Car *normalcar ;
        
        normalcar = malloc(sizeof(Car));
        
        *(normalcar).model ="UNIQUE";
        
        normalcar->noplate="7929";
        
        normalcar.gears='4';
        
        printf("The model of the car is %s\n",normalcar.model);
        
        return 0;
}
