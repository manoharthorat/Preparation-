#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int main()
{
pid_t pid;
	printf("Print parent process id %d \n",getpid());
	pid = fork();
	printf("Print parent process id %d \n",getpid());
	if(pid ==0)
	{
		execl("process9",NULL,NULL);
	}
	else
	{
		printf("Inside Parent process %d \n",pid);
		kill(pid,SIGKILL);
	}
return 0;
}
