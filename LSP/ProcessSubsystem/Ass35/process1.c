#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Inside process 1\n");
	if(fork()==0)
	{
		execl("./process2",NULL,NULL);
	}
	if(fork()==0)
	{
		execl("./process3",NULL,NULL);
	}
	if(fork()==0)
	{
		execl("./process4",NULL,NULL);
	}

return 0;
}
