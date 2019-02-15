#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*The wrong way to compare Strings */
    char *str1= argv[1];
    char *str2= argv[2];
    /*This only compares the address of the first element of the array i.e the first index 
     & since both strings reside in diffrent memory locations hence there addreses are also diffrent
     */
    if(str1 == str2)
    {
        printf("Same\n");
    }
    else
    {
        printf("Diffrent\n");
    }
    return 0;
}
