#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int fd,ret=0,CapCount=0;
	int offset;
	char buff[256],data[100];
	//If the file open int he read mode the conatents are from the 0 the position(0 byte offset)

	fd=open("demo.txt",O_RDONLY);
	if(fd==-1)
	{
		printf("Unbale to open the file\n");
		return -1;
	}
	while((ret=read(fd,buff,256))!=0)
	{
		while(ret != 0)
		{
			if(buff[ret] >='A' && buff[ret] <= 'Z')
			{
				CapCount++;
			}
			ret--;
		}
	}
	close(fd);
	fd=open("count.txt",O_WRONLY | O_APPEND);
	if(fd ==-1)
	{
		printf("Unable to open the count.tx file \n ");
	}
	sprintf(data,"demo.txt : %d \n",CapCount);
	write(fd,data,strlen(data));
	close(fd);
return 0;
}
