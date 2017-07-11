#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Parent process running \n");
	if(fork()==0)
	{
		execl("./FileNameWriter",NULL,NULL);
	}


return 0;
}
