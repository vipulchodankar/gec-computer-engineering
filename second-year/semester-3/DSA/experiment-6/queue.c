#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX];
int f  =  -1;
int r  =  -1;
int isEmpty();
int isfull();
void insert(int);
int delete();
int peek();
void display();
int main() {
	int ch, item;
	while(1) {
		printf("\n---------------------\n");
		printf("1. Insert an item\n");
		printf("2. Delete an item\n");
		printf("3. Display\n");
		printf("4. Display the top item\n");
		printf("5. Exit\n");
		printf("Enter ur choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:

					printf("\nEnter an item: ");
					scanf("%d", &item);
					insert(item );
					break;

			case 2:
				printf("The item popped is %d\n", delete());
				break;
			case 3:
				display();
				break;
			case 4:
				printf("The top element is %d\n", peek());
				break;
			case 5:
				exit(1);
		}
	}
	return 0;
}
int isfull() {
	if(r == MAX-1)
		return 1;
	else
		return 0;
}
int isEmpty() {
	if(f == -1 || f == r+1)
		return 1;
	else
		return 0;
}
int peek() {
	if(isEmpty())
		printf("Queue underflow\n");
	else
		return(queue[r]);

}
void insert(int i) {
	if(isfull()){
			printf("Queue overflow\n");
			return;
	}
	if(f == -1)
		f = 0;
	r = r+1;
	queue[r] = i;
}
int delete() {
	int i;
	if(isEmpty()) {
		printf("Queue underflow\n");
		return 0;
	}
	else
		i = queue[f];
	f = f+1;
	return (i);
}
void display() {
	if(isEmpty())
		printf("Queue is empty\n");
	else
		for(int i = f; i <= r; i++)
			printf("%d\t", queue[i]);
}
