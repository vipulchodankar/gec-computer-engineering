#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *start1=NULL;
struct node *start2=NULL;
struct node *start3=NULL;

struct node *insertion(struct node *start,int info)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=info;
	p=start;
	if(start == NULL)
	{
		temp->link=start;
		start=temp;
	}
	else
	{
	while(p->link!=NULL)
	p=p->link;
	temp->link=p->link;
	p->link=temp;
	}
return start;
}
void display(struct node *start)
{
	struct node *p;
	p=start;
	while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->link;
		}
		printf("\n");
}

struct node* selectionsort(struct node* start)
{
	int temp;
	struct node*p,*q,*min;
	for(p=start;p->link!=NULL;p=p->link)
	{
		min=p;
		for(q=p->link;q!=NULL;q=q->link){
			if(min->data>q->data)
				min=q;
			}
				if(p!=min)
				{
				temp=p->data;
				p->data=min->data;
				min->data=temp;
				}
				printf("\n");
			display(start);
	}
	return start;
}
struct node* bubblesort(struct node *start)
{
	struct node *p,*q,*end,*r,*temp;
	for(end=NULL;end!=start->link;end=p)
	{
		for(p=r=start;p->link!=end;r=p,p=p->link)
		{
			q=p->link;
			if(p->data>q->data)
			{
				p->link=q->link;
				q->link=p;
			if(p!=start)
			r->link=q;	
			else
			start=q;
			temp=p;
			p=q;
			q=temp;
			}
			printf("\n");
			display(start);
			
		}
	}
	return start;
}

struct node* merger( struct node*start1,struct node*start2 )
{

	struct node *ptr1=start1;
	struct node *ptr2=start2;
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1->data<ptr2->data)
		{
			start3=insertion(start3,ptr1->data);
			ptr1=ptr1->link;
				display(start3);
		}
	
		else if(ptr1->data>ptr2->data)
		{
			start3=insertion(start3,ptr2->data);
			ptr2=ptr2->link;
			display(start3);
		}
		else if(ptr1->data == ptr2->data)
		{
			start3=insertion(start3,ptr1->data);
			ptr1=ptr1->link;
			ptr2=ptr2->link;
			display(start3);
		}
	

}
while(ptr1!=NULL)
{
	start3=insertion(start3,ptr1->data);
			ptr1=ptr1->link;
			display(start3);
}
while(ptr2!=NULL)
{
	start3=insertion(start3,ptr2->data);
			ptr2=ptr2->link;
			display(start3);
}
return start3;
}

int main()
{
	int info,n,i;
	printf("Enter the no of elements\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the data\t");
		scanf("%d",&info);
		start1=insertion(start1,info);
	}
	printf("The unsorted array is:\t\n");
	display(start1);
	start1=selectionsort(start1);
	printf("The sorted array is:\t\n");
	display(start1);
	printf("Enter the no of elements:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the data:\t");
		scanf("%d",&info);
		start2=insertion(start2,info);
	}
	printf("The unsorted array is:\t\n");
	display(start2);
	start2=bubblesort(start2);
		printf("The sorted array is:\t\n");
	display(start2);
	printf("The merged array is:\t\n");
	start3=merger(start1,start2);
	printf("The merged array is :\n");
	display(start3);	
}
