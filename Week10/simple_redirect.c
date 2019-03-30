#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc , char *argv[])
{
        /*
         * open() : Used to open or possibly create a file
         * open( Filename , FLAGS , PERMISSIONS) 
         * 
         */
        int fd = open("Hello",O_WRONLY|O_CREAT,0777);
        
        /*
         * open() and creat() return the new file descriptor, or -1 if an error occurs.
         */
        if(fd ==-1)
        {
            return 0;
        }
        /*
         * Duplicating stdout to restore stdout later after redirection
         */
        int savestdout = dup(1);
        
        /*
         * Redirecting stdout to open file's file descriptor
         * 
         * dup2(Destination , Source )
         * 
         */
        
        dup2(fd,1);
        /*
         * Output of printf is now redirected to file
         */
        printf("Hello \n");
        
        printf("Hello \n");
        
        printf("Hello \n");
        /*
         * Flushing stdout to push buffer contents to file
         */
        fflush(stdout);
        /*
         * Restoring stdout by redirecting it to savestdin that points to the terminal
         */
        dup2(savestdout,1);
        
        printf("Stdout Restore successfull \n");
                
        return 0;
}
