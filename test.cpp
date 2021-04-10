#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <semaphore.h>


int main(int argc, char *argv[])
{
    sem_t  m;
    sem_init(&m,0,1);

    int p1=fork();
    int p2=fork();
    for(int i=0;i<4;i++){


    sem_wait(&m);
    printf(" hello world (pid:%d)\n", (int) getpid());
    printf(" hello world (pid:%d)\n", (int) getpid());
    sem_post(&m);
    sleep(1);
    }


    return 0;
}
