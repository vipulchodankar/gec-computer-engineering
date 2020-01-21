#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *ptr);
struct node *InsertSorted(struct node *p, int item);
void displayAlternate(struct node *ptr);

main()
{
	
	struct node *start5=NULL;
	int item;

	

	printf("\nEnter a list in sorted order : \n");
	start5 = create_list(start5);
	printf("\nEnter a number to be inserted in this sorted list : \n");
	scanf("%d",&item);
	start5 = InsertSorted(start5, item);
	display(start5);

}


struct node *InsertSorted(struct node *p, int item)
{
	struct node *tmp;
	if( p==NULL || item < p->info )
	{
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->info = item;
		tmp->link = p;
		return tmp;
	}
	p->link = InsertSorted(p->link, item);
	return p;
}

struct node *create_list(struct node *start)
{
	int i,n,value;
	struct node *q,*tmp;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	for(i=1;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&value);

		tmp= malloc(sizeof(struct node));
		tmp->info=value;
		tmp->link=NULL;

		if(start==NULL) /*If list is empty */
			start=tmp;
		else
		{       /*Element inserted at the end */
			q=start;
			while(q->link!=NULL)
				q=q->link;
			q->link=tmp;
		}
	}
	return start;
}/*End of create_list()*/

void display(struct node *ptr)
{
	if(ptr==NULL)
		return;
	printf("%d ",ptr->info);
	display(ptr->link);
}/*End of display()*/
