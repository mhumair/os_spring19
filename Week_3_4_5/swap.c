#include <stdio.h>
void swap(int*,int*);
int main ( int argc , char *argv[])
{
    int no = 5; int no2 = 10;
    printf("Before Swapping\n");
    printf("The value of no is %d\n",no);
    printf("The value of no2 is %d\n",no2);
    swap(&no,&no2);
    printf("*****************************\n");
    printf("After Swapping\n");
    printf("The value of no is %d\n",no);
    printf("The value of no2 is %d\n",no2);
    return 0;
}
void swap( int *no, int *no2)
{
    int temp =*no;
    *no = *no2;
    *no2= temp;
  
}
