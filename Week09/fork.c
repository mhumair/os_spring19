#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
 #include <sys/wait.h>
    
int main(int argc, char *argv[])
{
    /*
     * pid_t : The pid_t data type is a signed integer type which is capable of representing a process ID
     */
    /*
     * fork() : Creates a process by duplicating the parent process
     */
    pid_t pid = fork();
    if(pid ==0)
    {
        /*
         * exec : a family of functions that replaces the current process image with a new process image man exec to checkout other similar exec system calls
         */
        execlp(argv[1],argv[1],NULL);
        printf("YAY\n");
        /*
         * perror() : produces  a message on standard error describing the last  error  encountered  during             a call to a system or library function
         */
        perror("ERROR\n");
        /*
         * exit() : causes normal process termination
         */
        
        exit();
    }
    /*
     * wait() : wait for process to change state
     */
    wait(NULL);
    printf("YAY\n");
    
}
