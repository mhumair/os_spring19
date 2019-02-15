#include <stdio.h>

int main(int argc, char *argv[])
{
        int no[] ={1,2,3,4,5};
        
        int *pno = no;
        
        //pno = &no[0];
        
        printf(" Address of no  : %p \n" , &no);
        
        printf(" Address of no  : %p \n" , no);
        
        printf(" Value at p     : %d \n" , *pno);
        
        printf(" Value at address of no %d \n", *(no));
        
        printf(" Address in p   : %p \n" , pno);
        
        printf(" Address of p   : %p \n" , &pno);
        
        
}
