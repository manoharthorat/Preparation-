/* Write a program which creates two thread, first thread print nubers from 1 to 500 
  and another thread counts the number form 500 to 1 */

#include<pthread.h>
#include<stdio.h>

// Function to be considered as a thead 

void * Thread_proc1(void * p)
{
	int i=0;
	printf("Inside thread 1 \n");
	for(i=0; i<=1000; i++)
	{
		printf("Thread 1 = %d \n",i);
	}
	pthread_exit(NULL);
}

//Function to be considered as a thread 
void * Thread_proc2(void * p)
{

	pthread_exit();	
}


int main()
{
	pthread_t thread1, thread2;  // Created two objects of pthread_t structure 
	int ret1, ret2;

	// pthread_create function 
	ret1= pthread_create();		

	ret2= pthread_create();

	pthread_join();
	pthread_join();

	pthread_exit();
	return 0;
}
