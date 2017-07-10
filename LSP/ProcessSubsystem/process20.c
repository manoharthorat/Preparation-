#include<stdio.h>
#include<unistd.h>
int main()
{

	if(fork()==0)
	{
		printf("Before execution \n");
		execl("./executable1",NULL,NULL);
		printf("After process creation \n");
	}
	else
	{
		printf("Inside parent process \n");
	}
return 0;
}
