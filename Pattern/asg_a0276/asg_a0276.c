#include<stdio.h>


void print_pattern_03(int no)
{
	int i,j;
	for(i=0;i<=no;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");

		}
		printf("\n");
		
	}
}
int main()
{
	print_pattern_03(5);
	return 0;
}
