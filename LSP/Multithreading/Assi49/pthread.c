/*Write a program which is used to create the simple thread using pthread library */
#include<pthread.h>
#include<stdio.h>

void * Thread_proc(void * p)
{
	printf("Inside thread .. \n");
	pthread_exit(NULL);
}
int main()
{
	pthread_t thread1;
	int ret;
	printf("Inside main thread.. \n");
	ret = pthread_create(&thread1,
						NULL,
						ThreadProc,
						NULL);
	
	if(ret != 0)
	{
		printf("problem in thread creation \n");
	}

	pthread_join(thread1,
				NULL);
	
	pthread_exit(NULL);

return 0;
}
