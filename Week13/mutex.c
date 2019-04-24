#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
//pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
sem_t semaphore;
void *iterate(void *someno)
{
    pthread_mutex_lock(&lock);
    int *no = (int*)someno;
    *no = *no+1;
    printf("THe value of no is %d \n",*no);
    pthread_mutex_unlock(&lock);
}

int main(int argc , char *argv[])
{
        
        pthread_t tid[10];
        
        int no = 45;
        //printf("THe value of no was %d \n",no);
        //pthread_create(threadid,threadFlag,funcexecbythread,funcArg)
        for(int i=0 ; i< 10 ; i++)
        {
            pthread_create(&tid[i],NULL,iterate,&no);
            //pthread_join(tid[i],NULL);
        }
        for(int i=0 ; i< 10 ; i++)
        {
            pthread_join(tid[i],NULL);
            
        }
        
        
        return 0;
}
