#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct bike
{
	int pid;
	char model[20];
	float price;
};
struct hashtable
{
	struct bike b;
	int status;
};
int MAX;
int hash(char key[])
{
	int sum=0,i;
	for(i=0;i<strlen(key);i++)
	sum+=(int)key[i];				
	return (sum%MAX);				
}
void insert_hashtable(struct bike bh,struct hashtable ht[])
{
	int i,location,h;
	char key[20];
	strcpy(key,bh.model);
	h=hash(key);
	location=h;
	for(i=1;i<MAX;i++)
	{
		if(ht[location].status==-1 || ht[location].status==1)	
		{
			ht[location].b=bh;
			ht[location].status=0;	
			break;
		}
		location=(h+i)%MAX;			
	}
	if(i==MAX)
	printf("sorry the hash table is full\n");
}
void display_hashtable(struct hashtable ht[])
{
	int i;
	printf("*************************************\n");
	printf("Bike id\t\tModel\tprice\tlocation\t status\n");
	for( i=0;i<MAX;i++)
	{
		if(ht[i].status==0)
		{
			printf("%d\t%s\t\t%f\t%d\t%s\n",ht[i].b.pid,ht[i].b.model,ht[i].b.price,i,"OCCUPIED");
		}
		else if(ht[i].status==-1)
		{
			printf("\t\t\t\t\t%d\t%s\n",i,"EMPTY");
		}
		else if(ht[i].status==1)
			printf("\t\t\t\t\t%d\t %s\n",i,"DELTED");
	}
}
int search_table(char m[],struct hashtable ht[])
{
	int i,loc,h;
	h=hash(m);
	loc=h;
	for(i=1;i<MAX;i++)
	{
		if(ht[loc].status==0&&strcmp(ht[loc].b.model,m)==0)
		{
			return loc;
		}
		else if(ht[loc].status==-1)
		return -1;
		loc=(h+i)%MAX;
	}
}
int delete_table(char m[],struct hashtable ht[])
{
	int loc=search_table(m,ht);
	printf("***%d***\n",loc);
	if(loc==-1)
	return -1;
	else
		ht[loc].status=1;
}
int main()
{
	int i=-1,n,ch,ch1,tabsize;
	char model[20];
	 MAX=23;
	struct hashtable *ht;
	ht=(struct hashtable*)malloc(MAX*sizeof(struct hashtable));
	struct bike bh;
	for( i=0;i<MAX;i++)
	ht[i].status=-1;				
	int nb;					
	char m[20];				
	char m1[20];			
	while(1){
	printf("\n1.insert\n");
	printf("2.display\n");
	printf("3.search\n");
	printf("4.delete\n");
	printf("0.exit\n");
	printf("enter ur choice\n");
	scanf("%d",&ch1);
	switch(ch1)
		{
			case 0:
			exit(0);
			case 1:
			printf("\nenter no of bikes\n");
			scanf("%d",&nb);
			for(i=0;i<nb;i++)
			{
				printf("enter details of bike %d\n",i+1);
				printf("enter id ,model , price\n");
				scanf("%d %s %f",&bh.pid,bh.model,&bh.price);
				insert_hashtable(bh,ht);
			}
			break;
			case 2:
			display_hashtable(ht);
			break;
			case 3:
			printf("enter the model to be searched\n");
			scanf("%s",&m);
			int f=	search_table(m,ht);
			if(f==-1)
			printf("bike not found\n");
			else
			printf("bike found at %d location\n",f);
			break;
			case 4:
			printf("enter the model to be deleted\n");
			scanf("%s",&m1);
			int d=delete_table(m1,ht);
			if(d==-1)
			printf("no such bike found\n");
			else
			printf("bike has been deleted\n");
			break;
		}
	}
}