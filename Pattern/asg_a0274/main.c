#include<stdio.h>


void alter_case_1(int no)
{
	int i,j;
	for (i=0; i<no; i++) 
	{
		for (j=0; j<no; j++) 
		{
			printf(" * ");
		}
		printf("\n");
	}
}
int main()
{
	alter_case_1(5);

	return 0;
}
