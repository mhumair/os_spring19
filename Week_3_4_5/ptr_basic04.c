#include <stdio.h>

int main(int argc, char *argv[])
{
        int no[] ={1,2,3,4,5};
        
        int *pno = no;
        printf("Sizeof %ld\n",sizeof(no));
        int size = sizeof(no) / sizeof(int);
        for(int i=0 ; i < size ; i++)
        {
                printf(" Value of no    : %d \n" , no[i]);
                
                printf(" Pointer Value  : %d \n" , pno[i]);
        }
        
        for(int i=0 ; i < size ; i++)
        {                
                printf(" Pointer Value  : %d \n" , *(pno+i));
        }
        
        
        
}
