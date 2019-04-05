#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
        
        pid_t pipe_discriptors[2];
        
        pipe(pipe_discriptors);
        printf("Discriptor %d \n",pipe_discriptors[0]);
        printf("Discriptor %d \n",pipe_discriptors[1]);
        
        int pid = fork();       
        
        if(pid == 0)
        {
            close(pipe_discriptors[0]);
            dup2(pipe_discriptors[1],1);
            execlp("cat","cat","pipe.c",NULL);
        }
        
        wait(NULL);
        close(pipe_discriptors[1]);
        pid_t pid2 = fork();                
        if(pid2 == 0)
        {
            dup2(pipe_discriptors[0],0);
            execlp("grep","grep","printf",NULL);
        }
        wait(NULL);
        printf("The process id of child 1 is %d\n",pid);
        printf("The process id of child 2 is %d\n",pid2);
        
}
