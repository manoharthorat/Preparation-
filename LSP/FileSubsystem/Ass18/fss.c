/*Write a program which accept directory name from user and copy first 10 bytes from all regular file in to newly created file named as demo */

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<dirent.h>
#include<string.h>

int main(int argc, char * argv[])
{
	DIR * dir;
	int fd,fdwrite, ret;
	struct dirent * entry;
	struct stat filestat; // Structure which store all the information of the file.

	char filename[256];
	char name[100]= {'\0'};
	char buff[256]={'\0'};

	if(argc !=2 )
	{
		printf("Error: not sufficient arguments\n");
		return -1;
	}

	if((dir = opendir(argv[1]))==NULL)
	{
		printf("Unable to opent the specified directory \n");
		return -1;
	}


	fdwrite = creat("demo",0666);
	//Traverse the directory 

	while((entry = readdir(dir ))!=NULL)
	{
		//Use the create absolute path of the file 
		sprintf(name,"%s / %s ",argv[1],entry->d_name);
		stat(name,&filestat);

		//Check file size only if it is a regular file 
		if(S_ISREG(filestat.st_mode))
		{
			//open the file to read the data

			fd = open(name,O_RDONLY);
			ret = read(fd,buff,10);

			//Write the contents in to destination file 

			write(fdwrite,buff,ret);

			close(fd);
		}
		memset(&filestat,0,sizeof(filestat));

	}
	close(fdwrite);
	//Close directory 

	closedir(dir);


	return 0;
}



