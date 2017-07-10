#include<stdio.h>
#include<unistd.h>
int main()
{

	setsid();
	printf("Inside zombie process\n");
	sleep(5);
return 0;
}
