/*Write a program which accept two file names from user and check wheather contents of that two files are equql or not */
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	int fd1,fd2;
	int ret, flag=0,ret1=0;
	char buff1[256], buff2[256];
	struct stat filestat1, filestat2;

	if(argc != 3)
	{
		printf("Error : not sufficient arguments\n");
		return 0;
	}

	ret = stat(argv[1], &filestat1);
	if(ret == -1)
	{
		printf("Unable to retrive the information of file \n");
		return -1;
	}

	ret = stat(argv[2], &filestat2);
	if(ret ==-1)
	{
		 printf("Unable to retrive the information of file \n");
		 return -1;
	}


	if((int)filestat1.st_size != (int)filestat2.st_size)
	{
		printf("Contents of file are not equal due to file size \n");
		return -1;
	}
	
	fd1= open(argv[1],O_RDONLY);

	if(fd1 ==-1)
	{
		printf("Unable to open the first  file \n");
		return -1;
	}

	fd2 = open(argv[2],O_RDONLY);
	if(fd2== -1 )
	{
		printf("Unable to open the second file \n");
		return -1;
	}

	//Loop which is used to compare the data of both the files 

	while((ret=read(fd1,buff1,256))!=0)
	{
		ret1 = read(fd2,buff2,ret);
		if(memcmp(buff1,buff2,ret)!=0)
		{
			flag =-1;
			break;
		}

	}
		
	if(flag ==-1 || (ret !=0 || ret1 !=0 ) )	
	{
		printf("Contents are not equal\n");
		return 0;
	}
	else
	{
		printf("Contents are equal\n");
	}

	close(fd1);
	close(fd2);

return 0;
}
