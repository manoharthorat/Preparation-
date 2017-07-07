#include<stdio.h>
#include<unistd.h>
int main()
{
	int no=9;

	printf("A\n");
	no=fork();
	
	printf("%d\n",no);
	if(no==0)
	{
		printf("C\n");
	}
	printf("B\n");

return 0;
}
