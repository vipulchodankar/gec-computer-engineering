#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
}*top = NULL;

int isEmpty() {
  if(top == NULL)
    return 1;

  else
    return 0;
}

int peek() {
  if(isEmpty()){
    printf("\nStack Underflow!\n");
    return 0;
  }

  else {
    printf( "\nThe peeked element is: %d\n", top->data);
  }
}

int pop() {
  int item = top -> data;
  struct node *tmp;
  if(isEmpty()){
    printf("\nStack Underflow!\n");
    return 0;
  }

  else {
    tmp = top;
    top = top -> link;
    free(tmp);
    return item;
  }
}

int push(int info) {
  struct node* tmp;
  tmp = (struct node*) malloc (sizeof(struct node*));
  if(tmp == NULL){
    printf("\nInsufficient Memory!\n");
    return 0;
  }

  tmp -> link = top;
  tmp -> data = info;

  top = tmp;
  return 0;
}

void display() {
  struct node* p;
  p = top;
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
    printf( "\n\t-- Options --\n1. Push Element into Stack.\n2. Pop Element from Stack.\n3. Display Elements from Stack.\n4. Peek\n5. Exit\n\tChoose: ");
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
      peek();
      break;

    case 5:
      printf( "\nThanks for using the program!\n" );
      exit(1);
      break;

    default:
      printf( "\nPlease choose a valid option\n" );
      break;
    }
  }
}