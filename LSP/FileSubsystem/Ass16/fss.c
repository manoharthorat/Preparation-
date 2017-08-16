/*Write a program which accept the directory name from use and create the directory of that name */

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(int argc, char * argv[])
{
	int ret=0;
	if(argc != 2 )
	{
		printf("Error: not sufficient arguments\n");
		return -1;
	}
	//mkdir() system call accept two parameters one is the name of that directory and second is permissions of that direatory
	ret = mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if(ret == -1)
	{
		printf("Unable to create the directory \n");
		return -1;
	}

return 0;
}
