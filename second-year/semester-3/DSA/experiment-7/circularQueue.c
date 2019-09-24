#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 4

char queue[MAX][20];
int front = -1, rear = -1;


int isEmpty() {
  if(front == -1 && rear == -1)
    return 1;
  else
    return 0;
}

int isFull() {
  if( (front == 0 && rear == MAX - 1) || (front == rear + 1 ))
    return 1;
  else
    return 0;
}

char* peek() {
  if( isEmpty() ){
    printf( "\nQueue Underflow!\n" );
    exit( 1 );
  }
  else
    return queue[ front ];
}

void insert( char inputText[] ) {
  if(isFull()) {
    printf( "\nQueue Overflow!\n" );
    return;
  } 
  else {
    if ( front == -1 ){
      front = 0;
      rear = 0;
    }
    
    if( rear == MAX - 1)
      rear = 0;

    else
      rear++;

    strcpy( queue[ rear ], inputText );
  }
}

void del() {
  char temp[20];
  if(isEmpty()) {
    printf( "\nQueue Underflow!\n" );
    exit(1);
  }
  else
  {
    strcpy(temp, queue[front]);
    if (front == rear)
      front = rear = -1;
    else if(front == MAX - 1)
      front = 0;
    else
      front++;
  }
  printf("\n%s was deleted.\n", temp);
}

void display() {
  int i;
  if(isEmpty()) {
    printf( "\nQueue Underflow!\n" );
    exit(1);
  }
  else
  {
    i = front;
    if( front <= rear ) {
      while( i <= rear )
        printf("\n%s", queue[i++]);
    }
    else
    {
      while ( i <= MAX -1 )
        printf("\n%s", queue[i++]);
      i = 0;
      while ( i <= rear )
        printf("\n%s", queue[i++]);
    }    
  }
}

int main(){
  int opt;
  char inputText[20];

  while (1)
  {
    printf( "\n\t-- Options --\n1. Insert Element into Queue.\n2. Remove Element from queue.\n3. Display Elements.\n4. Peek\n5. Exit\n\tChoose: ");
    scanf( "%d", &opt );

    switch ( opt )
    {
    case 1:
      printf( "\nEnter string to enter: " );
      scanf( "%s", inputText);
      insert(inputText);
      break;

    case 2:
      del();
      break;

    case 3:
      display();
      break;

    case 4:
      printf( "\nThe peeked element is: %s", peek() );
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