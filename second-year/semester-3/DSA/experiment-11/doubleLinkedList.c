#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
  struct node *prev, *next;
  int info;
} *start = NULL;

void display () {
  struct node *p;
  if(start == NULL) {
    printf("\nList is empty!");
  } else {
    p = start;

    while(p != NULL) {
      printf("\n%d", p -> info);
      p = p -> next;
    }
  }
}

struct node* addBeginning( int data) {
  struct node *temp;
  temp = (struct node*) malloc (sizeof(struct node*));
  temp -> info = data;
  temp -> next = start;
  temp -> prev = NULL;
  start -> prev = temp;
  start = temp;
  return start;
}

struct node* addEmpty( int data) {
  struct node *temp;
  temp = (struct node*) malloc (sizeof(struct node*));
  temp -> prev -> info = data; //check
  temp -> next = NULL;
  temp -> prev = NULL;
  start = temp;
  return start;
}

struct node* addEnd( int data){
  struct node *temp, *p;
  temp = (struct node*) malloc (sizeof(struct node*));
  temp -> info = data;
  p = start;
  while(p -> next != NULL) {
    p = p -> next;
    p -> next = NULL;
    temp -> prev = p;
  }
  return start;
}

// Add after item
struct node* addAfter( int data, int item){
  struct node *temp, *p;
  temp = (struct node*) malloc (sizeof(struct node*));
  temp -> info = data;
  p = start;
  if(start == NULL) {
    printf("\nList is empty!");
    return 0;
  }
  while(p != NULL) {
    if(p -> info == data) {
      temp -> next = p -> next;
      temp -> prev = p;
      if(p -> next != NULL) {
        p -> next -> prev = temp;
        p -> next = temp;
      }
      p = p -> next;
    }
  }
}

// Add before item
struct node* addBefore( int data, int item){
  struct node *temp, *q;
  temp = (struct node*) malloc (sizeof(struct node*));
  temp -> info = data;
  if(start == NULL) {
    printf("\nList is empty!");
    return 0;
  }
  if(start -> info == item) {
    temp -> prev = NULL;
    temp -> next = start;
    start -> prev = temp;
    start = temp;
    return start;
  }
  q = start;
  while(q != NULL) {
    if(q -> info == item) {
      temp -> prev = q -> prev;
      temp -> next = q;
      q -> prev -> next = temp;
      q -> prev = temp;
      return start;
    }
    q = q -> next;
  }
  return start; 
}

int main() {
  int opt, data, item;

  while (1)
  {
    printf( "\n\t-- Options --\n1. Add to empty list.\n2. Add to beginning of list.\n3. Add to end of list.\n4. Add after a node.\n5. Add before a node.\n6. Exit\n\tChoose: ");
    scanf( "%d", &opt );

    switch ( opt )
    {
    case 1:
      printf( "\nEnter an integer: " );
      scanf("%d", &data);
      addEmpty(data);
      break;

    case 2:
      printf( "\nEnter an integer: " );
      scanf("%d", &data);
      addBeginning(data);
      break;

    case 3:
      printf( "\nEnter an integer: " );
      scanf("%d", &data);
      addEnd(data);
      break;

    case 4:
      printf( "\nEnter an integer: " );
      scanf("%d", &data);
      printf( "\nAfter which element do you wish to insert? : " );
      scanf("%d", &item);
      addAfter(data, item);
      break;

    case 5:
      printf( "\nEnter an integer: " );
      scanf("%d", &data);
      printf( "\nBefore which element do you wish to insert? : " );
      scanf("%d", &item);
      addBefore(data, item);
      break;

    case 6:
      exit(1);
      break;

    default:
      printf( "\nPlease choose a valid option\n" );
      break;
    }
  }
}