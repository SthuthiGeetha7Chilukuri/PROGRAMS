#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

void main()
{
        int pid;
        pid=fork();
        while(1)
        {
        if(pid==0)
        {
                int i;
                for(int i=0;i<5;i++)
                        printf("Child process\n");
                sleep(1);
        }
        else
        {
                int i=0;
                for(i=0;i<5;i++)
                        printf("Parent process\n");
                sleep(5);
        }
}
}

