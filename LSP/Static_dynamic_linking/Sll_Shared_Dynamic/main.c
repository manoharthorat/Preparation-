#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{
	struct node * first=NULL;
	void * p =NULL;
	void (*fp)(struct node *,int )=NULL;
	void (*fp1)(struct node *)=NULL;
	p = dlopen("/home/manohar/Preparation-/LSP/Static_dynamic_linking/Sll_Shared_Dynamic/library.so", RTLD_LAZY);

	if (p==NULL)
	{
		printf("Unable to load library \n");
	}

	fp = dlsym(p,"InsertFirst");
	if(fp ==NULL )
	{
		printf("Unable to get the address of function \n");

	}

	fp1 = disym(p,"Display");
	fp(&first,10);
	fp(&first,20);
	fp1(first);

	dlclose(p);
	return 0;
}
