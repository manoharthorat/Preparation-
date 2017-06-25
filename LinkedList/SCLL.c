#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
	int data;
	struct node * next;
};

int InsertFirst(struct node ** head, struct node ** tail, int no)
{
	struct node * newnode = (struct node * )malloc(sizeof(struct node ));
	if(newnode ==NULL)
	{
		return 0;
	}
	memset(newnode,0, sizeof(struct node ));
	newnode -> next=NULL;
	newnode -> data=no;
	if(*head ==NULL && *tail ==NULL)
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next=*head;
		return 0;
	}
	else
	{
		newnode -> next=*head;
		*head=newnode;
		(*tail)->next=newnode;
	}
return 0;
}
void Display(struct node *head, struct node * tail)
{
	do{
		printf("%d ",head->data);
		head = head->next;
	}while(head != tail->next);
}

int InsertLast(struct node **head, struct node ** tail, int no)
{
	struct node * newnode = (struct node * ) malloc (sizeof(struct node ));
	if(newnode ==NULL)
	{
		return 0;
	}
	memset(newnode , 0, sizeof(struct node));
	newnode-> next = NULL;
	newnode->data = no;
	if(*head==NULL && *tail ==NULL)
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next =*head;
		return 0;
	}
	else
	{
		(*tail)->next= newnode;
		(*tail)=newnode;
		(*tail)->next=*head;	
	}
return 0;	
}
int CountNOde(struct node * head)
{
}
int InsertAtPosition(struct node ** head , int pos, int no)
{
}
int SearchFirst(struct node * head)
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
struct node * last=NULL;
InsertFirst(&first,&last,10);
InsertFirst(&first,&last,20);
InsertFirst(&first,&last,30);
InsertFirst(&first,&last,40);
InsertFirst(&first,&last,50);

Display(first,last);
InsertLast(&first, &last, 60);
printf("\n");
Display(first,last);


return 0;	
}
