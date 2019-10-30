#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 4
int front=-1,rear=-1;
char cqueue[MAX][MAX];

int isFull()
{
	if(rear==MAX-1)
		return 1;
	return 0;		
}
int isEmpty()
{
	if(front==-1||front==rear+1)
		return 1;
	return 0;	
}
void insert(char item[])
{
	if(isFull())
	{
		printf("Circular Queue Overflow\n");
		return;
	}
	if(front==-1)
		front=0;
	if(rear==MAX-1)
		rear=0;
	else
		rear++;	
	strcpy(cqueue[rear],item);		
}
char del()
{
	char item[10];
	if(isEmpty())
	{
		printf("Circular Queue Underflow\n");
		exit(1);
	}
	strcpy(item,cqueue[front]);
	if(front==rear)
	{	
		front=-1;
		rear=-1;
	}
	else if(front==MAX-1)
		front=0;
	else 
		front++;	
	printf("%s is deleted\n",item);	
}
void disp()
{
	int i;
	if(isEmpty())
	{
		printf("Circular queue Underflow\n");
		return;
	}
	i=front;
	if(front<=rear)
	{
		while(i<=rear)
			printf("%s ",cqueue[i++]);
		printf("\n");			
	}
	else
	{
		while(i<=MAX-1)
			printf("%s ",cqueue[i++]);
		printf("\n");	
	}
}
char peek()
{
	if(isEmpty())
	{
		printf("Circular Queue Underflow\n");
		exit(1);
	}
	puts(cqueue[front]);
	printf("\n");
}

int main()
{
	int ch;
	char item[10];
	while(1)
	{
		printf("1.Insert\n2.Delete\n3.Peek\n4.Display\n5.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the item\n");
					scanf(" %s",&item);
					insert(item);
					break;
			case 2: del();
					break;
			case 3: peek();
					break;
			case 4: disp();
					break;
			case 5: exit(1);							
		}
	}
}
