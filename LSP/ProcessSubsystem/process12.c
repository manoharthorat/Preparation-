#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Parent PID %d \n",getpid());
	printf("Parent Parent PID%d \n",getppid());
	if(fork()==0)
	{
		printf("Child PID %d \n",getpid());
		printf(" Parent of child PID %d \n",getppid());
	}
	else
	{
		printf("Parent PID %d \n",getpid());
		printf("Parent Parent PID %d \n",getppid());
	}

return 0;
}
