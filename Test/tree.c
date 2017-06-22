#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node * left;
	int data;
	struct node * right;
};


int Insert(struct node ** head, int no)
{
	struct node * newnode = (struct node * ) malloc (sizeof(struct node));
	if(*head ==NULL)
	{
		newnode->left=NULL;
		newnode->right=NULL;
		newnode->data=no;
		(*head)=newnode;
		return 0;
	}
	if(no > (*head)->data)
	{	
		Insert(&((*head)->right),no);
	}
	else if(no < (*head)->data)
	{	
		Insert(&((*head)->left),no);
	}

}

void Preorder(struct node * head)
{
	if(head!=NULL)
	{
		printf("%d ",head->data);
		Preorder(head->left);
		Preorder(head->right);
	}
}


int main()
{
struct node * first = NULL;

Insert(&first,50);
Insert(&first,50);
Insert(&first,50);
Insert(&first,50);
Insert(&first,50);
Insert(&first,50);
Insert(&first,50);
Insert(&first,50);

Insert(&first,50);
Preorder(first);

return 0;
}
