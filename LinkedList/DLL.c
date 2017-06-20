#include<stdio.h>
#include<stdlib.h>

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
		count ++;
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

int InsertAtPosition(struct node ** head , int no , int pos )
{
	struct node * newnode =(struct node * ) malloc (sizeof(stuct node ));
	if (newnode ==NULL)
	{
		return 0;
	}
	if(pos == 1)
	{
		Insert(head,no);
	}
	else if (pos == CountNode(*head) + 1)
	{
		InserLast(head,no);
	}
	else if (pos > CountNode(*head) )
	{
	return 0;
	}
	else
	{
		struct node * temp = (struct node *) malloc (sizeof(struct node ));
		memset(newnode,0, sizeof(struct node ));
		newnode->next=NULL;
		newnode->prev=NULL;
		newnode->data= no;
		for(int i=1; i < pos -1 ;i++) 
		{
			temp = temp->next;
		}
		nownode -> next = temp -> next;
		temp->next -> next = newnode;
		temp ->next = newnode;
		newnode->prev = temp ->prev;

	}
}

void Display(struct node * head )
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head= head->next; 
	}

}
int main()
{
	struct  node * first=NULL;
	Insert(&first,20);
	

return 0;
}
