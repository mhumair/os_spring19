#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int main(int argc, char *argv[])
{
        //input
        printf("The no of arguments are %d\n", argc );
        
        for( int i = 1; i < argc; i++)
        {
            printf("The value at index %d is %s\n", i , argv[i]);
        }
        int no1 = atoi(argv[1]);
        int no2 = atoi(argv[2]);
        add(no1,no2);
        return 0;
}
int add(int no1,int no2)
{
        printf("The sum of two numbers is %d\n", no1+no2);
}
