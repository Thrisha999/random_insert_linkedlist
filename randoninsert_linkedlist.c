#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void main()
{
	int item,i;
	struct node *ptr,*temp;
	ptr = (struct node *) malloc(sizeof(struct node*));
	if(ptr == NULL)
	{
		printf("OVERFLOW");
	}
	else
	{
		int item,loc;
		printf("enter the value:\n");
		scanf("%d",&item);
		ptr->data = item;
		printf("enter the location you want to insert:\n");
		scanf("\n%d",&loc);
		temp = head;
		for(i=0;i<loc;i++)
		{
		
			if(temp != NULL)
			{
				temp = temp->next;
			}
			else
			{
				printf("can't insert\n");
				return;
			}
		}
			ptr->next = temp->next;
			temp->next = ptr;
			printf("Node inserted");
	}
}
