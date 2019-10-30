#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
}*front = NULL, *rear = NULL;

int isEmpty() {
  if(front == NULL && rear == NULL)
    return 1;

  else
    return 0;
}

int pop() {
  struct node *tmp;
  int info;
  if(isEmpty()){
    printf("\nStack Underflow!\n");
    return 0;
  }

  else if(front == rear){
    rear = NULL;
  }
    
  info = front -> data;
  tmp = front;
  front = front -> link;
  free(tmp);
  return info;
}

int push(int info) {
  struct node* tmp;
  tmp = (struct node*) malloc (sizeof(struct node*));
  if(tmp == NULL){
    printf("\nInsufficient Memory!\n");
    return 0;
  }

  else{
    tmp -> link = NULL;
    tmp ->data = info;

    if(front == NULL)
      front = tmp;

    else
      rear -> link = tmp;

    rear = tmp;
  }
}

void display() {
  struct node* p;
  p = front;
  if(isEmpty()){
    printf("\nStack Underflow!\n");
  }
  else {
    while (p != NULL){
      printf("\n%d", p -> data);
      p = p -> link;
    }
  }
}

int main() {
  int opt;
  int data;

  while (1)
  {
    printf( "\n\t-- Options --\n1. Push Element into Queue.\n2. Pop Element from Queue.\n3. Display Elements from Queue.\n4. Exit\n\tChoose: ");
    scanf( "%d", &opt );

    switch ( opt )
    {
    case 1:
      printf( "\nEnter an integer: " );
      scanf("%d", &data);
      push(data);
      break;

    case 2:
      pop();
      break;

    case 3:
      display();
      break;

    case 4:
      printf( "\nThanks for using the program!\n" );
      exit(1);
      break;

    default:
      printf( "\nPlease choose a valid option\n" );
      break;
    }
  }
}