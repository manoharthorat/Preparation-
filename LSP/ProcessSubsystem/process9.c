#include<stdio.h>
#include<unistd.h>
int main()
{
	int no;
	printf("A\n");
	no = fork();
	printf("%d\n",no);
	if(no !=0 )
	{
		printf("B\n");		
	}
	else
	{
		printf("C\n");
	}
	printf("D\n");

return 0;
}
