#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
char item[10];
char *arr[MAX];
int f=-1;
int r=-1;
void display() {
	int i;
	i=f;
	if(f <= r) {
		while(i <= r)
		printf("\n%s\t", arr[i++]);
	}
	else {
		while(i <= MAX-1)
		printf("\n%s\t", arr[i++]);
		
		i=0;
		while(i <= r)
		printf("\n%s\t", arr[i++]);
		
		
	}}
	int isEmpty() {
	if(f == -1 && r == -1)
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
void insertfront(char item []) {
	if(f == -1 && r == -1) {
		f++;
		r++;
	}
  else if(f == 0)
		f=MAX-1;
	else
		f--;
	arr[f]=(char*)malloc(sizeof(char)*strlen(item));
	strcpy(arr[f], item);
	printf("\n\tf=%d\tr=%d\n", f, r);
}
void insertrear(char item []) {
	if(f == -1 && r == -1) {
		f++;
		r++;
	}
  else if(r == MAX-1)
		r=0;
	else
		r++;
	arr[r]=(char*)malloc(sizeof(char)*strlen(item));
	strcpy(arr[r], item);
	printf("\n\tf=%d\tr=%d\n", f, r);
}	
void deletefront() {
	printf("\nThe item deleted is %s\n", arr[f]);
	if(f == r)
		f=r=-1;
	else if(f == MAX-1)
		f=0;
	else 
		f++;
	printf("\n\tf=%d\tr=%d\n", f, r);
}	

void deleterear() {
	printf("\nThe item deleted is %s\n", arr[r]);
	if(f == r)
		f=r=-1;
	else if(r == 0)
		r=MAX-1;
	else 
		r--;
	printf("\n\tf=%d\tr=%d\n", f, r);
}

int main() {
	int ch, i;
	while(1) {
		printf("\n1.-Insert\t2.-Delete\t3.-Display\t4.-Exit\n\tEnter choice:");
	scanf("%d", &ch);
	switch(ch) {
		case 1:
			if(isfull()) {
				printf("\nCircular Queue Overflow\n");
				break;
			}
			else {
				int a;
				printf("\n1.Insert at front\t2.Insert at rear\n");
				scanf("%d", &a);
				printf("\nEnter the string\n");
				scanf("%s", &item);
				if(a == 1)
					insertfront(item);
				else
					insertrear(item);
			}
			break;
		case 2:
			if(isEmpty())
				printf("\nCircular Queue Underflow\n");
			else {
				int a;
				printf("\n1.Delete from front\t2.Delete from rear\n");
				scanf("%d", &a);
				if(a == 1)
					deletefront(item);
				else
					deleterear(item);}
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
	}
	}
}