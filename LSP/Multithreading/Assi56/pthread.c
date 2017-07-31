/*Write a program whoch is used to predict the problem due to lack of synchronization*/

#include<stdio.h>
#include<pthread.h>

int counter;
void * Thread_proc(void * p)
{
	unsigned long i=0;
	counter++;
	printf("Task %d started successfully \n",counter);
	for(i=0;i<0xffffffff;i++)
	
	printf("Task %d finished successfully \n",counter);
	pthread_exit(NULL);
}
int main()
{
	pthread_t thread1, thread2;
	int ret1;
	int no=11;
	ret1 = pthread_create(&thread1, NULL, Thread_proc, NULL);

	if(ret1 !=0)
	{
		printf("Problem in thread1 creation \n");
	}

	ret1 = pthread_create(&thread2, NULL, Thread_proc, NULL);

	if(ret1 !=0)
	{
		printf("Problem in thread2 creation \n ");
	}
	
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	pthread_exit(NULL);

return 0;
}
