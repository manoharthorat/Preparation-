#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
	struct node * prev;
	int data;
	struct node * next;
};

int Insert(struct node ** head, int no)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node ));
	if(newnode == NULL)
	{
		return 0;
	}
	memset(newnode, 0, sizeof(struct node ));
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->data = no;

	if(*head ==NULL)
	{
		(*head)=newnode;
		return 0;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
		newnode->prev=newnode;
	}
return 0;	
}

int CountNode(struct node * head )
{
	int count =0;
	while(head!=NULL)
	{
		count++;
		head = head ->next;
	}
return count;
}

int SearchFirstOccarance(struct node * head , int no )
{
	int pos=0;
	while(head!=NULL)
	{
		pos ++;
		if(head ->data ==no)
		{
			return pos;
		}
		head = head->next;
	}

}

int SearchAllOccarance(struct node * head , int no)
{
	int count =0;
	while(head!=NULL)
	{
		if(head->data ==no)
		{
			count ++;
		}
		head = head ->next;
	}
	return count;
}

int InsertLast( struct node ** head, int no)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node ));
	if(newnode==NULL)
	{
		return 0;
	}
	newnode->next=NULL;
	newnode->data=no;
	newnode->prev=NULL;
	if(*head==NULL)
	{
		*head=newnode;
		return 0;
	}
	else
	{
		struct node * temp = (*head);
		while(temp->next !=NULL)
		{
			temp =temp ->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	
	}
return 0;
}
int InsertAtPosition(struct node ** head , int no , int pos )
{
   	if(pos == 1)
	{
		Insert(head,no);
	}
	else if (pos == CountNode(*head) + 1)
	{
		InsertLast(head,no);
	}
	else if (pos > CountNode(*head) )
	{
		return 0;
	}
	else
	{
	 	struct node * newnode = (struct node *)malloc(sizeof(struct node ));				
   		if (newnode ==NULL)
		{	
			return 0;
		}

		struct node * temp = (*head);
		memset(newnode,0, sizeof(struct node ));
		newnode->next=NULL;
		newnode->prev=NULL;
		newnode->data= no;
		for(int i=1; i < pos -1 ;i++) 
		{
			temp = temp->next;
		}
		newnode -> next = temp -> next;
		temp->next ->prev = newnode;
		temp ->next = newnode;
		newnode->prev = temp;

	}
return 0;
}

void Display(struct node * head )
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head= head->next; 
	}

}

int DeleteFirst(struct node ** head)
{
	struct node * temp = (*head);
	if(*head==NULL)
	{
		return 0;
	}
	else
	{
		*head=temp->next;
		temp->next=NULL;
		free(temp);
	}
}

int DeleteLast(struct node ** head)
{
	struct node * temp = (*head);
	if(*head==NULL)
	{
		return 0;
	}
	else
	{
		
	}
}
int DeleteAtPosition(struct node ** head, int pos)
{

}

int ReverseList(struct node ** head)
{

}
int main()
{
	struct  node * first=NULL;
	Insert(&first,20);
	Insert(&first,30);
	Insert(&first,40);
	Insert(&first,50);
	Insert(&first,20);
	Insert(&first,60);
	Insert(&first,70);
	Display(first);
	InsertLast(&first,25);
	printf("\n");
	Display(first);
	printf("\nTotal Count of the nodes %d \n",CountNode(first));
	InsertAtPosition(&first,45,4);
	Display(first);
	printf("\nSearch first occarance %d \n",SearchFirstOccarance(first,20));
	printf("\nSearch All occarance %d \n",SearchAllOccarance(first,20));
	DeleteFirst(&first);
	Display(first);
return 0;
}
