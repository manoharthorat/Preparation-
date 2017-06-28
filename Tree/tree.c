#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node * left;
	int data;
	struct node * right;
};

int InsertFirst(struct node ** head, int no)
{
	struct node * newnode =NULL;
	if(* head ==NULL)
	{
		newnode=(struct node *) malloc(sizeof(struct node ));
		newnode->left=NULL;
		newnode->right=NULL;
		newnode->data=no;
		(*head)=newnode;
		return 0;
	}
	else if(no < (*head)->data)
	{
		InsertFirst(&((*head)->left),no);		
	}
	else if(no > (*head)->data)
	{
		InsertFirst(&((*head)->right),no);
	}	
}



int main()
{
	struct node * first=NULL;



return 0;
}
