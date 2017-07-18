#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
	int data;
	struct node * next;
};

int InsertFirst(struct node ** , int );
void Display(struct node *);

