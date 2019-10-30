#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 4

char arr[MAX];
int front=-1, rear=-1;

int isempty() {
	if(front == -1)
		return 1;
	else
		return 0;
}

int isfull() {
	if(front == 0 && rear == MAX-1|| front == rear+1)
		return 1;
	else 
		return 0;
}

void insertf(char item[]) {
	if(isfull()) {
		printf("\nQueue Overflow!\n");
	}
	if(front == -1) {
		front=0;
		rear=0;
	}
	else if(front  ==  0)
		front=MAX-1;
	else
		front=front-1;
	strcpy(arr[front], item);
}

void insertr(char item[]) {
	if(isfull()) {
		printf("\nQueue Overflow!\n");
	}
	if(front == -1) {
		front=0; 
        rear=0; 
	}
	else if(rear == MAX-1)
		rear=0;
	else
		rear=rear+1;
	strcpy(arr[rear], item);
}

char delf() {
	if(isempty()) {
		printf("\nQueue Underflow\n");
		exit(1);
	}
	if (front == rear) {
		front=-1;
		rear=-1;
	}
	else {
		if(front == MAX-1)
			front=0;
		else 
			front=front+1;
	}
}

char delr() {
	if(isempty()) {
		printf("\nQueue Underflow!\n");
		exit(1);
	}
	if (front == rear) {
		front=-1;
		rear=-1;
	}
	else {
		if(rear == 0)
			rear=MAX-1;
		else 
			rear=rear-1;
	}
}

void display() {
	int i;
	i=front;
	if(isempty())
    	printf("\nQueue Underflow!\n");
	printf("\nQueue elements: ");
    if(front <= rear) {
    	while(i <= rear) {
    		printf("%s\t", arr[i]);
    		i++;
    	}
    }
	else {
    	while(i <= MAX-1) {
    		printf("%s\t", arr[i]);
    		i++;
    	}
    	i=0;
    	while(i <= rear) {
    		printf("%s\t", arr[i]);
    		i++;
		}
	}
	printf("\n\n");
}

int main() {
	int a;
	char item[10];
	while(1) {
	printf("1 INSERT(FRONT)\n2 INSERT(REAR)\n3 DELETE(FRONT)\n4 DELETE(REAR)\n5 DISPLAY\n6 EXIT\n");
	printf("\nEnter your choice: ");
	scanf("%d", &a);
	switch(a) {
		case 1 : printf("\nEnter the item: ");
				 scanf("%s", &item);
				 insertf(item);
				 display();
				 break;
		case 2 : printf("\nEnter the item: ");
				 scanf("%s", &item);
				 insertr(item);
				 display();
				 break;
		case 3 : printf("\n%s item is deleted!\n", arr[front]);
				 delf();
				 display();
			 	 break;
		case 4 : printf("\n%s item is deleted!\n", arr[rear]);
				 delr();
				 display();
			 	 break;
		case 5 : display();
			 	 break;
		case 6 : exit(1);
		}
	}
	return 0;
}
