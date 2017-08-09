/*Write a program which creates two threads by using pthread API, where one thread counts 
  number of capital characters from demo.txt file and other threads count number of small characters from same file  */

#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


void * ThreadProc1(void * p)
{
	int fd, ret = 0, SmallCnt=0;
	char buff[256], data[100];
	//If file is opened in read mode we can read the contents from 0 byte offset 

	fd = open("demo.txt",O_RDONLY);
	printf("File descriptor of thread 1 is %d \n",fd);
	if(fd ==-1)
	{
		printf("Unable to open the file \n");
		pthread_exit(NULL);
	}
	while((ret = read(fd,buff,256))!=0)
	{
		while(ret !=0)
		{
			if(buff[ret] >= 'a' && buff[ret] <= 'z')
			{
				SmallCnt++;
			}
			ret --;
		}
	}
	close(fd);
	printf("Small character by thread 1 is %d \n",SmallCnt);
	pthread_exit(NULL);
}

void * ThreadProc2(void * p)
{
	int fd, ret = 0, CapCnt=0;
	char buff[256], data[100];
	//If file is opened in read mode we can read the contents from 0 byte offset 

	fd = open("demo.txt",O_RDONLY);
	printf("File descriptor of thread 1 is %d \n",fd);
	if(fd ==-1)
	{
		printf("Unable to open the file \n");
		pthread_exit(NULL);
	}
	while((ret = read(fd,buff,256))!=0)
	{
		while(ret !=0)
		{
			if(buff[ret] >= 'A' && buff[ret] <= 'Z')
			{
				CapCnt++;
			}
			ret --;
		}
	}
	close(fd);
	printf("Cap character by thread 1 is %d \n",CapCnt);
	pthread_exit(NULL);
}
int main()
{
	pthread_t thread1, thread2;
	int ret1, ret2;
	

	ret1 = pthread_create(&thread1,
				NULL,
				ThreadProc1,
				NULL);
	if(ret1!=0)
	{
		printf("problem in thread1 creation \n");
	}

	ret2 = pthread_create(&thread2,
				NULL,
				ThreadProc2,
				NULL);
	if(ret2!=0)
	{
		printf("problem in thread1 creation \n");
	}

	pthread_join(thread1, NULL);
	pthread_join(thread2,NULL);

	pthread_exit(NULL);

return 0;
}


