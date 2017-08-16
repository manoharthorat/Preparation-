/*Write a program which accept file name from user which contains information of all employee we have to read all contents of the file */

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char * argv[])
{
	int fd;
	int ret;

	typedef struct info 
	{
		char name[50];
		int number;
	}INFO;

	if(argc !=2 )
	{
		printf("Error : Not sufficient arguments \n");
		return -1;
	}

	INFO obj1;

	fd= open(argv[1],O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open the file \n");

	}

	while((ret = read(fd,&obj1,sizeof(obj1)))!=0)
	{
		printf("%d %s \n",obj1.number, obj1.name);
	}
	close(fd);

	return 0;
}

