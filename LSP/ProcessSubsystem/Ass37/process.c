#include<stdio.h>
#include<unistd.h>
int main()
{

	printf("Parent process running \n");
	if(fork()==0)
	{
		printf("Child");
		execl("./zombe",NULL,NULL);
	}
return 0;
}
