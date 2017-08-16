/*Write a program which accept directory name from user and write all information of all regular file and then read the contents from that file */

#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{
	DIR * dir;
	struct dirent * entry;
	struct stat filestat;
	char name[100] = {'\0'};
	int fd;

	typedef struct 
	{
		char name[100];
		int ino;
		int size;
	}FILEINFO;

	FILEINFO obj;

	if(argc !=2 )
	{
		printf("Error : not sufficient argument \n");
		return -1;
	}

	//open the directory 

	if((dir = opendir(argv[1]))==NULL)
	{
		printf("Unable to open specified directory \n");
		return -1;
	}

	fd= creat("Info",0666);
	
	if(fd ==-1)
	{
		printf("Unable to create the file \n");
		return -1;
	}

	 while ((entry = readdir(dir)) != NULL)
	{
	// Create absolute path
		sprintf(name,"%s/%s", argv[1],entry->d_name);
		stat(name,&filestat);

		// Check file type
		if(S_ISREG(filestat.st_mode))
		{
			strcpy(obj.name,entry->d_name);
			obj.ino = filestat.st_ino;
			obj.size = filestat.st_size;
			
			write(fd,&obj,sizeof(obj));
		}

	}

	closedir(dir);
	printf("Information of all file are\n");
	close(fd);
	fd = open("Info",O_RDONLY);
	while((read(fd,&obj,sizeof(obj)))!=0)
	{
		printf("%d\t%s\t%d\n",obj.ino,obj.name,obj.size);
	}
			


return 0;
}
