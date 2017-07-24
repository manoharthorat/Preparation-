/*Write a program which creates a single thread and it accept one value from user and it returns some value to the caller thread*/
#include<stdio.h>
#include<pthread.h>

void * ThreadProc(void * p)
{
	int i=(int)p;
	printf("Ebtered value is %d \n",i);
	pthread_exit((void*)i);

}
int main()
{
	pthread_t thread1;
	int ret1;
	int no=10;
	int no1=0;
	ret1 = pthread_create(&thread1,
							NULL,
							ThreadProc,
							(void*)no);
	if(ret1 != 0)
	{
		printf("Unable to create the thread \n");
	}

	pthread_join(thread1,(void*)&no1);
	printf("values of no1 is %d \n",no1);
	pthread_exit(NULL);

return 0;
}
