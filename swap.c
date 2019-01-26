#include <stdio.h>

void swap(int no1,int no2)
{
        int temp = no1;
        no1 = no2;
        no2 = temp;
        printf("The value of no1 is %d \n",no1);
        printf("The value of no2 is %d \n",no2);
}
int main(int argc, char *argv[])
{
        int no1 = atoi(argv[1]);
        int no2 = atoi(argv[2]);
        swap(no1,no2);
        printf("The value of no1 is %d \n",no1);
        printf("The value of no2 is %d \n",no2);
        
        int *no3;
}
