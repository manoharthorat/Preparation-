/*Write a program which is used to create the simple thread using pthread library */
#include<pthread.h>
#include<stdio.h>

//Function to be consider as a thread
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
	ret = pthread_create(&thread1,  	 //Address of pthread_t structure 
				NULL,	 	//Thread attributes
				Thread_proc,	//Function name
				NULL);		//Function parameter
	
	if(ret != 0)
	{
		printf("problem in thread creation \n");
	}

	// It suspend execution of calling thread till target thread termination 
	pthread_join(thread1,		//Thread id 
				NULL);	//Location of  thread 
	
	pthread_exit(NULL);		//Terminate running thread
return 0;
}
