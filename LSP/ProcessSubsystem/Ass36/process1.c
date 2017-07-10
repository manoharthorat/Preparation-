#include<stdio.h>
#include<unistd.h>
int main()
{

int status1,status2;
pid_t pid1,pid2;

	if(fork()==0)
	{
		execl("./process2",NULL,NULL);
	}
	else
	{
		printf("Parent is waiting for process 2\n");
		pid1=wait(&status1);
	}
	if(fork()==0)
	{	
		execl("./process3",NULL,NULL);
	}
	else
	{
		printf("Parent process is waiting for process 3\n");
		pid2 = wait(&status2);
	}
	return 0;

}
