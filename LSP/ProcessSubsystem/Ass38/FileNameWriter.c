/*Write a program which write the directory name from user and write information of all regular file in and then read the contents from that file.*/

#include<sys/types.h>
#include<dirent.h>
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main()
{
	DIR * dir;
	struct dirent *entry;
	struct stat filestat;
	char name[100]={'\0'};
	int fd;

	typedef struct 
	{
		char name[50];
		int ino;
		int size;
	}FILEINFO;
	FILEINFO obj;

	//Open the direcotry 
	if((dir = opendir("/home/manohar/Desktop"))==NULL)
	{
		printf("Unable to open the specified directory \n");
		return -1;
	}

	fd=creat("Info",0666);
	if(fd ==-1 )
	{
		printf("Unable to create the file \n");
		return -1;
	}
	
	while((entry = readdir(dir))!=NULL)
	{
		sprintf(name,"/home/manohar/Desktop/%s",entry->d_name);
		stat(name,&filestat);
		if(S_ISREG(filestat.st_mode))
		{
			strcpy(obj.name,entry->d_name);
			obj.ino = filestat.st_ino;
			obj.size = filestat.st_size;

			write(fd,&obj,sizeof(obj));
		}
	}
	closedir(dir);
return 0;
}
