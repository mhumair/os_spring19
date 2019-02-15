#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int no1 = atoi(argv[1]);
    int no2 = atoi(argv[2]);

    if(no1 == no2)
    {
        printf("Same\n");
    }
    else
    {
        printf("Diffrent\n");
    }
    return 0;
}
