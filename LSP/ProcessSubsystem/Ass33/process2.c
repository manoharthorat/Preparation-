#include<stdio.h>
#include<unistd.h>
int main()
{
	int status;
	pid_t pid;
	if(fork()==0)
	{
		execl("./process3",NULL,NULL);
	}
	else
	{
		printf("Inside process 2\n");
		pid= wait(&status);
	}
return 0;
}
