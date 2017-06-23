#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node * next;
};

int InsertFirst(struct node ** head, int no)
{
	struct node * newonde = (struct node * )malloc(sizeof(struct node ));
	if(newnode ==NULL)
	{
		return 0;
	}
	memset(newnode,0, sizeof(struct node ));
	newnode -> next=NULL;
	newnode -> data=no;
	if(*head ==NULL)
	{
		*head=newnode;
	}
}
void Display(struct node *head)
{
}

int InsertLast(struct node **head, int no)
{
}
int CountNOde(struct node * head)
{
}
int InsertAtPosition(struct node ** head , int pos, int no)
{
}
int SearchFirst(struct ndoe * head)
{
}

int SearchLast(struct node * head)
{
}
int SearchAllOccurance(struct node * head)
{
}
int DeleteFirst(struct node ** head)
{

}
int DeleteLast(struct node ** head)
{
}
int DeleteAtPosition(struct node ** head, int pos)
{

}
int DeleteAllNode(struct node ** head)
{
}

int ReverseList(struct node * head)
{

}





int main()
{
struct node * first=NULL;

return 0;	
}
