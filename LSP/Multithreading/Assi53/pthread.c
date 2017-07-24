/*Write a program which is used to get thread id inside its thread function*/

#include<stdio.h>
#include<pthread.h>

void * ThreadProc(void *P)
{
	pthread_t tid;
	tid = pthread_self();
	printf("Thread id %d \n",tid);
	pthread_exit(NULL);
}

int main()
{
	pthread_t thread1;
	int ret;
	ret = pthread_create(&thread1,
				NULL,
				ThreadProc,
				NULL);

	if(ret !=0)
	{
		printf("Unable to create the thread\n");
	}

	pthread_join(thread1,NULL);
	pthread_exit(NULL);

	return 0;
}
