#include<stdio.h>
void print_pattern_08(int no)
{
	int i,j;
	for (i=no;i>=1;i-=2)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	print_pattern_08(7);
	return 0;
}
