#include "sll.h"

int InsertFirst(struct node ** head, int no)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		return 0;
	}
	memset(newnode, 0,sizeof(struct node));
	newnode -> data = no;
	newnode -> next = NULL;

	if(*head==NULL)
	{
		*head=newnode;
		return 0;
	}
	else
	{
		newnode->next= (*head);
		(*head)=newnode;
	}
return 0;
}


void Display(struct node * head)
{
	while(head !=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

