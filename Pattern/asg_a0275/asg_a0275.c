#include<stdio.h>



void print_pattern_02(int no)
{
	int i,j;
	for(i=0;i<=no;i++)
	{
		for(j=0;j<=no;j++)
		{
			if(i>j)
			{
				printf("");
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
	print_pattern_02(5);
	return 0;
}
