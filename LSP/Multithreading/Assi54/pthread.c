/*Write a program which creates 4 number of threads and our main thread waits till all the thread terminates */

#include<stdio.h>
#include<pthread.h>

void * ThreadProc(void *p)
{
	printf("Inside thread with id %d and data %d \n",pthread_self(),(int)p);
	pthread_exit(NULL);
}

int main()
{
	pthread_t thread[4];
	int ret;
	int i=0;
	for(i=0;i<4;i++)
	{
		ret = pthread_create(&thread[i],
				NULL,
				ThreadProc,
				(void*)i);
		if(ret !=0)
		{
			printf("Unable to create the thread %d\n",i);
		}
	}
	
	for(i=0;i<4;i++)
	{
		pthread_join(thread[i],NULL);
	}
	pthread_exit(NULL);

return 0;
}
