/* Write a program which creates two thread, first thread print nubers from 1 to 500 
  and another thread counts the number form 500 to 1 */

#include<pthread.h>
#include<stdio.h>

// Function to be considered as a thead 

void * Thread_proc1(void * p)
{
	int i=0;
	printf("Inside thread 1 \n");
	for(i=1; i<=500; i++)
	{
		printf("Thread 1 = %d \n",i);
	}
	pthread_exit(NULL);
}

//Function to be considered as a thread 
void * Thread_proc2(void * p)
{
	int i=0;
	printf("Inside Thread 2 \n");
	for(i=500; i>=1; i--)
	{
		printf("Thread 2 = %d \n",i);
	}
	pthread_exit(NULL);	
}


int main()
{
	pthread_t thread1, thread2;  // Created two objects of pthread_t structure 
	int ret1, ret2;

	// pthread_create function 
	ret1= pthread_create(&thread1,
							NULL,
							Thread_proc1,
							NULL);		

	if(ret1!=0)
	{
		printf("Problem in thread1 creation .. \n");
	}
	
	ret2= pthread_create(&thread2,
							NULL,
							Thread_proc2,
							NULL);
	

	if(ret2!=0)
	{
		printf("Problem in thread2 creation .. \n");
	}
	
	
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	pthread_exit(NULL);
	return 0;
}
