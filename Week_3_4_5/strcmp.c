#include <stdio.h>
#include <stdlib.h>

int strlength(char *s);

int main(int argc, char *argv[])
{
    char *str1 = argv[1];
    char *str2 = argv[2];
    
    // GET LENGTH OF STRINGS 
    int str1_length=strlength(str1);
    
    int str2_length=strlength(str2);
    
    
    if(str1_length !=str2_length)
    {
        printf("Diffrent Length\n");
    }
    else
    {
        int i=0;
        
        while(str1[i] == str2[i] && str1[i]!='\0')
        {   
            i++;
        }
        if(i == str1_length)
        {
            printf("Same\n");
        }
        else
        {
            printf("Diffrent Strings\n");
        }
    }
    
    return 0;
}
int strlength(char *s)
{
        //calculating the length of given string
        int length =0;
        while(s[length] != '\0')
        {
                length++;
        }
        return length;
}
