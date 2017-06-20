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
	struct node * newnode=NULL;
	if(*head == NULL)
	{
		newnode=(struct node *)malloc(sizeof(struct node ));
		newnode ->left=NULL;
		newnode ->right=NULL;
		newnode ->data=no;
		(*head)=newnode;
		return 0;
	}
	else if(no < (*head)->data)
	{
		Insert(&((*head)->left),no);
	}
	else if(no > (*head)->data)
	{
		Insert(&((*head)->right),no);
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
void Inorder(struct node * head)
{
	if(head!=NULL)
	{
		Inorder(head->left);
		printf("%d ",head->data);
		Inorder(head->right);
	}
}

void Postorder(struct node * head)
{
	if(head!=NULL)
	{
		Postorder(head->left);
		Postorder(head->right);
		printf("%d ",head->data);
	}
}

int CountNode(struct node * head)
{
	static int count=0;
	if(head!=NULL)
	{
		count ++;
		CountNode(head->left);
		CountNode(head->right);
	}
	return count;
}

int CountLeafNode(struct node * head)
{
	static int count=0;
	if(head!=NULL)
	{
		if(head->left ==NULL && head->right==NULL)
		{
			count++;
		}
	CountLeafNode(head->left);
	CountLeafNode(head->right);
	}
	return count;
}

int DisplayHeightBST(struct node * head, int level)
{
	static int height =-1;
	if(head!=NULL)
	{
		level++;
		if(height < level)
		{
			height=level;
		}
		DisplayHeightBST(head->left,level);
		DisplayHeightBST(head->right,level);
	}
	return height;
	
}
int main()
{
	struct node * first=NULL;
	Insert(&first,40);
	Insert(&first,20);
	Insert(&first,60);
	Insert(&first,90);
	Insert(&first,10);
	Insert(&first,23);
	Insert(&first,44);
	Insert(&first,7);
	Insert(&first,1);
	Insert(&first,78);
	Insert(&first,56);
	
	printf("\n");
	Preorder(first);
	printf("\n");
	Inorder(first);
	printf("\n");
	Postorder(first);

	printf("\n The total number of nodes are %d \n",CountNode(first));
	printf("\n The total number of leaf nodes are %d \n",CountLeafNode(first));
	printf("\n Height of the BST  %d \n",DisplayHeightBST(first,-1));


	return 0;
}
