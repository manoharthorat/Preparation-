#include<stdio.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		printf("Inside child's code \n");
	}
	else
	{
		printf("Inside parent process \n");
		execl("./process12",NULL,NULL);
	}
	printf("Parent's code \n");

return 0;
}
