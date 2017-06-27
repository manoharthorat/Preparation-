#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node 
{
	struct node * prev;
	int data;
	struct node * next;
};

int InsertFirst(struct node ** head, struct node ** tail, int no)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node ));
	if(newnode ==NULL)
	{
		return 0;
	}
	memset(newnode,0,sizeof(struct node ));
	newnode->prev=NULL;
	newnode->next=NULL;
	newnode->data=no;

	if(*head ==NULL && *tail ==NULL)
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next=*head;
		(*head)->next=*tail;
	}
	else
	{
		newnode->next=*head;
		(*head)->prev=newnode;
		*head=newnode;
		(*tail) ->next=*head;
		(*head)->prev=*tail;
	}
return 0;
}
void Display(struct node *head, struct node * tail )
{
	do
	{
		printf("%d ",head->data);
		head = head->next;
	}while(head!=tail->next);
}

int InsertLast(struct node **head,struct node ** tail , int no)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node ));
	if(newnode ==NULL)
	{
		return 0;
	}
	memset(newnode,0,sizeof(struct node ));
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->data=no;

	if(*head ==NULL && *tail ==NULL)
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next=*head;
		(*head)->next=*tail;
	}
	else
	{
		(*tail)->next=newnode;
		newnode->prev=(*tail);
		*tail=newnode;
		(*tail)->next=*head;
		(*head)->prev=*tail;
	}
return 0;
}
int CountNode(struct node * head,struct node *tail )
{
	int count=0;
	do{
		count++;
		head=head->next;
	}while(head!=tail->next);
return count;
}
int InsertAtPosition(struct node ** head , struct node ** tail, int pos, int no)
{
   	if(pos == 1)
	{
		InsertFirst(head,tail,no);
	}
	else if (pos == CountNode(*head, *tail) + 1)
	{
		InsertLast(head,tail,no);
	}
	else if (pos > CountNode(*head, *tail) )
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

int SearchFirst(struct node * head, struct node * tail, int no)
{
	int count =0;
	do {
		count ++;
		if(head->data == no)
 		{
				return count;	
		}
	head = head ->next;
	}while(head!=tail->next);
}

int SearchLast(struct node * head, struct node * tail, int no)
{
}
int SearchAllOccarance(struct node * head, struct node * tail, int no)
{
	int count =0;
	do {
		if(head->data ==no)
		{
			count ++;
		}
		head = head->next;
	}while(head!= tail->next);
return count;
}
int DeleteFirst(struct node ** head,  struct node ** tail)
{
	if(*head == NULL && *tail ==NULL)
	{
		return 0;
	}
	else
	{
		struct node * temp= *head;
		*head=temp->next;
		temp->next->prev=*tail;
		(*tail)->next=*head;
		free(temp);
	}
return 0;
}

int DeleteLast(struct node ** head,  struct node ** tail)
{
	if( *head ==NULL && *tail ==NULL)
	{
		return 0;
	}
	else
	{
		struct node * temp = *tail;
		*tail=temp->prev->next;
		(*head)->prev=*tail;
		temp->prev->next=*head;
		free(temp);
	}
return 0;
}
int DeleteAtPosition(struct node ** head, struct node ** tail, int pos)
{
	if(*head==NULL && *tail==NULL)
	{
		return 0;
	}
	else if(pos ==1)
	{
		DeleteFirst(head,tail);
	}
	else if(pos == (CountNode(*head, *tail)))
	{
		DeleteLast(head,tail);
	}
	else if(pos == (CountNode(*head, *tail)+1))
	{
		return 0;
	}
	else
	{
		struct node * temp =(*head);
		for(int i=1; i< pos ; i++)
		{
			temp =temp ->next;
		}
		temp ->prev ->next = temp->next;
		temp ->next -> prev =temp -> prev;
		free(temp);
	}
return 0;
}
int DeleteAllNode(struct node ** head, struct node ** tail)
{
}

int ReverseList(struct node * head)
{

}


int main()
{
struct node * first=NULL;
struct node * last=NULL;
InsertFirst(&first,&last,20);
InsertFirst(&first,&last,30);
InsertFirst(&first,&last,20);
InsertFirst(&first,&last,40);
InsertFirst(&first,&last,20);
InsertFirst(&first,&last,50);
Display(first,last);
printf("\n");
InsertLast(&first,&last,80);
Display(first,last);
printf("\nToatal Count of the nodes %d \n",CountNode(first,last));
printf("\nInsertAt position \n");
InsertAtPosition(&first,&last,3, 55);
Display(first,last);
printf("\nSearch First occarance %d \n",SearchFirst(first,last,20));
printf("\nSearch All Occarances %d \n",SearchAllOccarance(first,last,20));

printf("\nDelete First \n");
DeleteFirst(&first,&last);
Display(first,last);
printf("\nDelete Last \n");
DeleteLast(&first,&last);
Display(first,last);
printf("\nDelete At position \n");
DeleteAtPosition(&first,&last,3);
Display(first,last);
return 0;	
}
