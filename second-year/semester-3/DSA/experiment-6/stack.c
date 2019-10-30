#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX];
int top = -1;
int isempty();
int isfull();
void push(int);
int pop();
int peek();
void display();
int main() {
	int ch, item;
	while(1) {
		printf("1. Push an item\n");
		printf("2. Pop an item\n");
		printf("3. Display\n");
		printf("4. Display the top item\n");
		printf("5. Exit\n");
		printf("Enter ur choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1:
				printf("\nEnter an item: ");
				scanf("%d", &item);
				push(item);
				break;
			case 2:
				printf("The item popped is %d\n", pop());
				break;
			case 3:
				display();
				break;
			case 4:
				printf("The top element is %d\n", peek());
				break;
			case 5:
				exit(1);
			//	break;
		}
		display();
	}
	return 0;
}
int isfull() {
	if(top == MAX)
		return 1;
	else
		return 0;
}
int isempty() {
	if(top == -1)
		return 1;
	else
		return 0;
}
int peek() {
	if(isempty())
		printf("Stack underflow\n");
	else
		return(stack[top]);
}
void push(int i) {
	if(isfull()) {
			printf("Stack overflow\n");
			return;
		}
	else
		top++;
		stack[top] = i;
}
int pop() {
	int i;
	if(top == -1) {
		printf("Stack underflow\n");
		return 0;
	}
	else
	i = stack[top];
	top--;
	return(i);
}
void display() {
	int i;
	if(top == -1)
		printf("Stack is empty\n");
	else {
		printf("Queue:\t");
		for(i = top;i >= 0;i--)
			printf("%d ", stack[i]);
	}
	printf("\n");
}
