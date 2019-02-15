#include <stdio.h>
int cityno=1;

int main(int argc, char *argv[])
{
        char city01[] = {'Q','U','E','T','T','A','\0'};
        
        char city02[] = "KARACHI";
        
        char *city03  = "PESHAWAR";
        
        char *ptr_city01=city01;
        
        printf(" Address city01      : %p \n" , &city01);
        
        printf(" Address city01      : %p \n" , city01);
        
        printf(" Value city01        : %s \n" , city01);
        
        printf(" Value city02        : %s \n" , city02);
        
        printf(" Value city03        : %s \n" , city03);
        
        printf(" Value ptr_city01    : %s \n" , ptr_city01);
        
        
}
