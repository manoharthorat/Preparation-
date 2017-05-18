#include<stdio.h>


void print_pattern_05(int no)
{

	int i,j;
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			if((i+j) <= no )
			{
				printf("#");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
int main()
{
	print_pattern_05(5);
	return 0;
}
