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
int CountNOde(struct node * head, struct node * tail)
{
	int count =0;
	do {
		count ++;
		head = head ->next;
	}whlile(head != tail ->next);
return count;
}
int InsertAtPosition(struct node ** head , int pos, int no)
{
	
}
int SearchFirst(struct node * head)
{
	int pos=0;
	do{
		pos ++;
		if(head -> data == no)
		{
			return pos;
		}
	head = head ->next;
	}whiel(head != tail ->next);
return pos;
}

int SearchLast(struct node * head)
{

}
int SearchAllOccurance(struct node * head, struct node * tail)
{
	int count=0;
	do {
		if(head -> data = no)
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
		*tail->next=temp ->next;
		free(temp);
	}

return 0;
}
int DeleteLast(struct node ** head, struct node ** tail)
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
