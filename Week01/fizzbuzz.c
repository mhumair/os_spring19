#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int no1 = 0;

	int no2 = 0;
	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	
	int i=0;
	while( i< 100)
	{
		if(i% no1==0 && i % no2==0)
		{
			printf("FizzBuzz\n");
		}
		if(i % no1==0)
		{
			printf("Fizz\n:");
		}
		else if(i% no2==0)
		{
			printf("Buzz\n:");
		}
		else
		{
			printf("The no is %d\n",i);
		}
		i++;	
	}
	return 0;
}
