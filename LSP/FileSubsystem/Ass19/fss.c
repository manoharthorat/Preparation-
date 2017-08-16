/*Write a program which accept file name and position from user and read 20 bytes from that position */

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	int fd;
	int ret;
	char buff[50];

	if(argc != 3)
	{
		printf("Error : Not sufficient arguments\n");
		return -1;
	}

	fd =open(argv[1],O_RDONLY);
	if(fd ==-1)
	{
		printf("Unbale to open  the file \n");
		return -1;
	}

	lseek(fd,atoi(argv[2]),SEEK_SET);

	read(fd,buff,20);
	printf("%s",buff);
	close(fd);

return 0;
}
