#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
void main()
{
    printf("PID\tPPID\n");
    fork();
    fork();
    int id = fork();
    printf("%d\t%d\n",getpid(),getp
    pid());
}