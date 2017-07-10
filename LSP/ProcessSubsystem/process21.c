#include<stdio.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		printf("Before process creation \n");
		execl("./process12",NULL,NULL);
		printf("After Process creation \n");
	}
	else
	{
		printf("Inside parent process \n");
	}

return 0;
}
