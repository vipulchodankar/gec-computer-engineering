#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
char item[10];
char *cqueue[MAX];
int f = -1;
int r = -1;
void display() {
	int i;
	i=f;
	if(f <= r) {
		while(i<=r)
		printf("%s\t", cqueue[i++]);
	}
	else {
		while(i<=MAX-1)
		printf("%s\t", cqueue[i++]);
		i = 0;
		while(i<=r)
		printf("%s\t", cqueue[i++]);
	}
}
int isEmpty() {
	if(f == -1  &&  r == -1)
		return 1;
	else 
		return 0;
}
int isfull() {
	if(f == 0 && r == MAX-1||f == r+1)
	return 1;
	
	else
	return 0;	
}
void insert(char item []) {
	if(f == -1 && r == -1)
	{
		f++;
		r++;
	}
  	else if(r == MAX-1)
	r=0;
	else
	r++;
	cqueue[r]=(char*)malloc(sizeof(char)*strlen(item));
	strcpy(cqueue[r], item);
	
}
void delete() {
	//strcpy(item, cqueue[f]);
	//item=cqueue[f];
	if(f==r)
		f=r=-1;
	else if(f == MAX-1)
		f=0;
	else 
		f++;
}
int main() {
	int ch, i;
	while(1) {
		printf("\n 1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n\t Enter Choice: ");
	scanf("%d", &ch);
	switch(ch) {
		case 1:
			if(isfull()) {
				printf("\nCircular Queue Overflow\n");
				break;
			}
			else {
				printf("\nEnter the string: ");
				scanf("%s", &item);
				insert(item);
			}
			break;
		case 2:
			if(isEmpty())
				printf("\nCircular Queue Underflow\n");
			else
			 printf("\nthe element is %s", cqueue[f]);
			delete();
			break;			
		case 3:
			display();
			break;
		case 4:
			exit(1);
	}
}}