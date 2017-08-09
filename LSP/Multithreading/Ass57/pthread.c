/*Write a program which creates two thread, and by using appropriate synchronization technique avoid the scheduling problem */

#include<pthread.h>
#include<stdio.h>

int counter;
pthread_mutex_t lock;

//Function to be considered as a thread 
void * ThreadProc1(void * p)
{
	pthread_mutex_lock(&lock);
	unsigned long i=0;
	counter ++;
	printf("Task %d started successfully \n",counter);
	for(i=0; i < 0xffffffff; i++)

	printf("The task %d finished successfully \n",counter);

	pthread_mutex_unlock(&lock);
	pthread_exit(NULL);
}



int main()
{
	pthread_t thread1, thread2;
	int ret1;
	int no=11;
	
	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		printf("Problem in mutex creation \n")	;
	}

	ret1 = pthread_create(&thread1, NULL, ThreadProc1, NULL);

	if(ret1 !=0)
	{
		printf("Problem in thread1 creation \n");
	}
	
	ret1 = pthread_create(&thread2, NULL, ThreadProc1, NULL);

	if(ret1 !=0)
	{
		printf("Problem in thread1 creation \n");
	}

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	pthread_exit(NULL);

	pthread_mutex_destroy(&lock);
	
	return 0;
}
