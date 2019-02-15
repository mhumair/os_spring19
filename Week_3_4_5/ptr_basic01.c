#include <stdio.h>

int main(int argc, char *argv[])
{
        int no = 10;
        int *pno = &no;
        
        printf(" Address of no  : %p \n" , &no);
        
        printf(" Value no       : %p \n" , no);
        
        printf(" Value at p     : %d \n" , *pno);
        
        printf(" Address in p   : %p \n" , pno);
        
        printf(" Address of p   : %p \n" , &pno);
        
        printf(" Value at address of no %d \n ", *(&no));
}
