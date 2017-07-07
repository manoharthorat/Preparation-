#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Parent PID %d\n ",getpid());
	if(fork()==0)
	{
		printf("Child PID %d\n ",getpid());
	}
	else
	{
		printf("Parent PID %d\n ",getpid());
	}
	return 0;
}
