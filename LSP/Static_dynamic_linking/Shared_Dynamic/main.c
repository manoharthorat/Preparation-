#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>    // Functionality for the dynamic link order 

int main()
{
	void * p =NULL;
	void * fp()= NULL; // Funtion pointer
	
	//This function is used to load the dynamic link library in to the memory and it will return the handle on success.
	p = dlopen("",RTLD_LAZY);
	if(p!)
	{
		printf("Unable to load the library \n");
	}

	//This function takes the handle of loaded library and symbol. It returns addess of that symbol from library.
	fp = dlsym(p,"DemoFunction");
	if(fp==NULL)
	{
		printf("Unable to get address of function \n");
	}
	fp();

	//this function is used to unload the library
	dlclose(p);
return 0;
}

