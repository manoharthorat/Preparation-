#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("A\n");
	if(fork()==0)
	{
		printf("B\n");
	}
	else
	{
		printf("C\n");
	}
	printf("D\n");
}
