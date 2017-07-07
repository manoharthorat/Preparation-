#include<stdio.h>
#include<unistd.h>
int i=10;
void fun()
{
	i++;
	printf("fun %d \n",i);
}
int main()
{
	if(fork()==0)
	{
		fun();
	}
	else
	{
		fun();
	}
return 0;
}
