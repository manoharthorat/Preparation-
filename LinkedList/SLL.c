#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node 
{
	struct node * next;
	int data;
};

int Insert(struct node ** head, int no)
{
	struct node * newnode=(struct node *) malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		return 0;
	}
	newnode->data=no;
	newnode->next=NULL;
	
	if(*head==NULL)
	{
		(*head)=newnode;		
	}
	else
	{
		newnode->next = (*head);
		(*head) = newnode;
	}
return 0;
}

int CountNode(struct node * head)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head=head->next;
	}
	return count;
}

int InsertLast(struct node ** head, int no)
{
	struct node * temp = (*head);
	struct node * newnode=(struct node *) malloc(sizeof(struct node ));
	if(newnode==NULL)
	{
		return 0;
	}
	memset(newnode,0,sizeof(struct node));
	newnode->next=NULL;
	newnode->data=no;
	if(*head==NULL)
	{
		*head=newnode;
		return 0;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;	
		}
		temp->next=newnode;
	}
return 0;
}

int SearchFirstOccarance(struct node * head, int no)
{
	int pos=0;
	while(head!=NULL)
	{
		pos++;
		if(head->data == no)
		{
			return pos;		
		}
	head=head->next;
	}
}

int SearchSecondLast(struct node * head, int no)
{
	int pos=0;
	int temp1=0;
	int temp2=0;
	while(head!=NULL)
	{
		pos++;
		if(head->data==no)
		{
			temp1=pos;
			temp2=temp1;
		}
		head=head->next;	
	}

return temp2;
}
int SearchAllOccarance(struct node * head, int no)
{
	int count =0;
	while(head!=NULL)
	{
		if(head ->data ==no)
		{
			count++;
		}
	head=head->next;
	}
return count;
}

int InsertAtPosition(struct node ** head, int pos, int no)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node ));
	struct node * temp1 = (*head);
	if (newnode==NULL)
	{
		return 0;
	}
	memset(newnode,0,sizeof(struct node ));
	newnode->next=NULL;
	newnode->data=no;
	if(pos ==1)
	{
		Insert(head,no);
	}
	else if(pos == (CountNode(*head)+1))
	{
		InsertLast(head,no);
	}
	else if(pos > (CountNode(*head)))
	{
		return 0;
	}
	else 
	{
		for(int i=1;i < pos-1;i++)
		{
			temp1=temp1->next;
		}	
		newnode->next=temp1->next;
		temp1->next =newnode;
	}
return 0;
}

void Display(struct node * head)
{
	while(head !=NULL)
	{
		printf("%d ",head->data);
		head = head ->next;
	}
}


int DeletFirst(struct node ** head)
{
}
int DeleteLast(struct node ** head)
{

}

int DeleteAtPosition(struct node ** head, int pos)
{

}

int ReverseList(struct node ** head )
{

}

int main()
{
	struct node * first =NULL;
	Insert(&first,10);
	Insert(&first,30);
	Insert(&first,50);
	Display(first);
  	Insert(&first,60);
	Insert(&first,20);
	Insert(&first,50);
	Insert(&first,45);
	Insert(&first,36);
	Insert(&first,50);
	printf("\n");
	Display(first);
	printf("\nThe total count of nodes %d \n",CountNode(first));
	InsertLast(&first,78);
	printf("\n");
	Display(first);
	printf("\nSearch first occarance %d \n",SearchFirstOccarance(first,50));
	printf("\nSearch All occarance %d \n",SearchAllOccarance(first,50));
	InsertAtPosition(&first,4,56);
	Display(first);
	printf("\nSecond last occarance %d \n",SearchSecondLast(first,50));
	return 0;
}
