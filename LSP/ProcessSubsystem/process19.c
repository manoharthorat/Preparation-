#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Our Process\n");
	if(fork()==0)
	{
		execl("./executable1",NULL,NULL);
		printf("Executable 1\n");
	}

return 0;
}
