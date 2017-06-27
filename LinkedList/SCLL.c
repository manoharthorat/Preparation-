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
int CountNode(struct node * head, struct node * tail)
{
	int count =0;
	do {
		count ++;
		head = head ->next;
	}while(head != tail ->next);
return count;
}
int InsertAtPosition(struct node ** head ,struct node ** tail, int pos, int no)
{
	if(pos==1)
	{
		InsertFirst(head,tail,no);
	}
	else if(pos == (CountNode(*head,*tail)+1))
	{
		InsertLast(head, tail, no);
	}
	else if (pos > (CountNode(*head,*tail)))
	{
		return 0;
	}
	else
	{
		struct node * newnode =(struct node * ) malloc(sizeof(struct node ));
		memset(newnode, 0, sizeof(struct node ));
		newnode-> next=NULL;
		newnode->data = no;

		struct node * temp = *head;
		for(int i=1; i< pos-1 ; i++)
		{
			temp = temp ->next;
		}
		newnode-> next= temp ->next;
		temp-> next = newnode;
	}
return 0;
}
int SearchFirst(struct node * head, struct node * tail, int no )
{
	int pos=0;
	do{
		pos ++;
		if(head -> data == no)
		{
			return pos;
		}
	head = head ->next;
	}while(head != tail ->next);
return pos;
}

int SearchAllOccarance(struct node * head, struct node * tail, int no)
{
	int count=0;
	do {
		if(head->data == no)
		{
			count ++;
		}
	head = head ->next;
	}while(head != tail -> next);
return count ;
}
int DeleteFirst(struct node ** head, struct node ** tail )
{
	if(*head ==NULL && *tail == NULL)
	{
		return 0;
	}
	else
	{
		struct node * temp = (*head);
		*head=temp->next;
		(*tail)->next=temp ->next;
		free(temp);
	}

return 0;
}
int DeleteLast(struct node ** head, struct node ** tail)
{
	struct node * temp1 = *head;
	struct node * temp2 = *tail;
	while(temp1-> next != temp2)
	{
		temp1= temp1 ->next;
	}
	(*tail)= temp1;
	temp1->next=*head;
	free(temp2);
return 0;
}
int DeleteAtPosition(struct node ** head, struct node ** tail, int pos)
{
	if(pos ==1 )
	{
		DeleteFirst(head,tail);
	}
	else if (pos == (CountNode(*head,*tail)+1))
	{
		DeleteLast(head,tail);
	}
	else if(pos > (CountNode(*head,*tail)))
	{
		return 0;
	}
	else
	{
		struct node * temp1=*head;
		struct node * temp2=*head;
		for(int i=0;i<pos;i++)
		{
			temp1=temp2;
			temp1=temp1->next;
		}
		temp2->next=temp1->next;
		temp1->next=NULL;
		free(temp1);
	}
return 0;
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
InsertFirst(&first,&last,40);
InsertFirst(&first,&last,30);
InsertFirst(&first,&last,40);
InsertFirst(&first,&last,50);
InsertFirst(&first,&last,40);
Display(first,last);
InsertLast(&first, &last, 60);
printf("\n");
Display(first,last);
printf("\nTotal Count of the nodes %d\n ",CountNode(first,last));
printf("\nSearch first occarance %d \n",SearchFirst(first, last, 40));
printf("\nSearch all occarance %d \n",SearchAllOccarance(first, last, 40));
DeleteFirst(&first,&last);
Display(first,last);
InsertAtPosition(&first,&last,3,34);
printf("\n");
Display(first,last);
printf("\nDelete Last\n");
DeleteLast(&first,&last);
Display(first,last);
DeleteAtPosition(&first, &last,3);
printf("\n");
Display(first,last);
return 0;	
}
