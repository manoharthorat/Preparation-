#include<stdio.h>
#include<unistd.h>

int main()
{
	int no;
	printf("Parent id %d\n",getpid());
	no = fork();
	printf("no = %d\n",no);
	if(no !=0)
	{
		printf("Parent PID %d \n",no);
	}

return 0;
}
