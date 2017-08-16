/*Write a program which erites structure in to the file */

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc , char * argv[])
{
	int fd;
	int ret;

	typedef struct info
	{
		char name[20];
		int number;
	}INFO;

	if(argc != 2)
	{
		printf("Error: insufficient argument\n");
		return 0;
	}

	INFO obj1, obj2;

	strcpy(obj1.name,"Manohar");
	strcpy(obj2.name,"Thorat");

	obj1.number=11;
	obj2.number=22;

	fd=open(argv[1],O_WRONLY);
	if(fd==-1)
	{
		printf("Unbale to open the file\n ");
		return -1;
	}
		
	ret =write(fd,(char *)&obj1,sizeof(obj1));
	if(ret ==-1)
	{
		printf("unable to write the contens in to file \n");
		return -1;
	}
	
	ret =write(fd,(char *)&obj2,sizeof(obj2));
	if(ret ==-1)
	{
		printf("unable to write the contens in to file \n");
        return -1;
    }

	
    close(fd);
	
return 0;
}
