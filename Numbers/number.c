#include<stdio.h>

/*
//Program to find out the factors
static int j=0;
int * number(int no)
{
	int i;
	static int arr1[20];

	for(i=1; i<=no; i++)
	{
		if(no%i==0)
		{
			arr1[j]=i;
			j++;
		//	printf("%d\n",i);			
		}
	}
return arr1;
}
int main()
{
	int * arr;

	arr=number(24);
	for(int i=0; i< j; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
*/


// Program to find out the prime number 

/*
int prime(int no)
{
	int flag=0;
	for(int i=2; i<=no/2; i++)
	{
		if(no % i ==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	int no=0;
	int ret =0;
	printf("Enter the number \n");
	scanf("%d",&no);
	ret = prime(no);
	if(ret ==0)
	{
		printf("Number is prime \n");
	}
	else 
	{
		printf("Number is not a prime \n");
	}
	return 0;
}
*/

// Check number is perfect or not 
/*
int perfect(int no)
{
	int newno=no;
	int sum=0;
	for(int i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;		
		}
	}
	if(newno==sum)
	{
		printf("Number is perfect \n");
	}
	else
	{
		printf("Number is not perfect \n");
	}
}
int main()
{
	perfect(15);	
	return 0;
}
*/

//Perfect range 
/*
int perfect_range(int first, int last)
{
	for(int i=first; i<= last; i++)
	{
		int isum=0;
		for(int j=1; j<=i/2; j++)
		{
			if(i%j==0)
			{
				isum=isum+j;
			}
		}
		if(isum==i)
		{
			printf("Perfect %d \n",i);
		}
			
	}
return 0;
}


int main()
{
	perfect_range(10,50);
	return 0;
}
*/

//separete the digit 
/*
int separate_digit(int no)
{
	while(no!=0)
	{
		printf("%d ",no%10);
		no=no/10;
	}
}
int main()
{
	separate_digit(1234);
	return 0;
}
*/

//Armstrong number or not 


int power(int no, int cnt)
{
	while(cnt !=0)
	{
		no = no*cnt;
		cnt--;
	}
	return no;	
}
void armstrong(int inum)
{	int no=inum;
	int isum=0;
	while(inum !=0)
	{
		isum = isum + power(inum %10);	
		inum=inum/10;
		continue;
	}	
	if(isum ==no)
	{
		printf("Armstrong \n");
	}
	else
	{
		printf("Not armstrong");
	}
}
int main()
{
	int num=0;
	printf("Enter the number \n");
	scanf("%d",&num);
	armstrong(num);
	return 0;
}


/*
void palindrome(int no)
{
	int rev=0;
	int temp= no;

	while(no != 0)
	{
		rev = (rev *10)+ (no %10);
		no = no/10;
	}
	if(temp == rev)
	{
		printf("Palindrome \n");
	}
	else
	{
		printf("not palindrome \n");
	}
}
int main()
{
	int no=0;
	printf("Enter the number \n");
	scanf("%d",&no);
	palindrome(no);
	return 0;
}
*/

