/*
int open(const char * name, int flags, mode_t mode);
int creat(const char * name, mode_t mode);
int read(int fd, void * buff, size_t len);
int write(int fd, void * buf, size_t len);
int close(int fd);
long int lseek(int fd, long int pos, int origin);
*/

/*Write a program which accept file name from user using command line and open that specified files*/

#include<stdio.h>
#include<fcntl.h>
#include<malloc.h>
/*
int main(int argc, char * argv[])
{
	int fd;
	if(argc != 2)
	{
		printf("Error: not sufficient arguments\n ");
		return -1;
	}

	//Open the file in read only mode 
	//Syntax int open(char * path, mode_of_file);
	//If success it will return the proper file descriptor otherwise it will return -1

	fd=open(argv[1], O_RDONLY);
	if(fd==-1)
	{
		printf("Unale to open the file \n");
	}
	else
	{
		printf("File is successfully opened with file descriptor %d \n",fd);
	}
	close(fd);
	return 0;
}
*/

// Write a program which accept file name and number of bytes from use and read the nuber of bytes from the file 

int main(int argc, char * argv[])
{
	int fd;
	int ret;
	int offset;
	char * buff =NULL;

	if(argc != 3)
	{
		printf("Error : not sufficient arguments \n");
		return -1;
	}

	fd= open(argv[2],O_RDONLY);

	if(fd == -1)
	{
		printf("Unable to opent he file \n");
		return -1;
	}

	//Allocate the memory for local buffer 

	buff = (char *) malloc(sizeof(char)*atoi(argv[1]));

	if(buff == NULL)
	{
		printf("Memory allocation failed \n");
		return -1;
	}

	ret = read(fd, buff, atoi(argv[1]));
	
	if(ret != atoi(argv[1]))
	{
		printf("Unable to read the expected number of bytes \n");
	}

	printf("Contents of file %s are : \n %s \n",argv[1],buff);
	close(fd);

return 0;
}
