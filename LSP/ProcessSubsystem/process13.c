#include<stdio.h>
#include<unistd.h>
int main()
{
	int i=10;
	printf("Parent i = %d\n",i);
	if(fork()==0)
	{
		++i;
		printf("Child i = %d\n",i);
	}
	else
	{
		i++;
		printf("Parent i = %d\n",i);
	}
return 0;
}
