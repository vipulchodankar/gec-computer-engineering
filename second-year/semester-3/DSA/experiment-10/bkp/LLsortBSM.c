#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* link;
};

struct node *startSS = NULL, *startBS = NULL, *startMS = NULL;

int insert(int info) {
  struct node* tmp;
  tmp = (struct node*) malloc (sizeof(struct node*));
  if(tmp == NULL){
    printf("\nInsufficient Memory!\n");
    return 0;
  }

  else{
    tmp -> link = NULL;
    tmp ->data = info;

    if(startSS == NULL)
      startSS = tmp;

      startSS -> link = tmp;
  }
}

void display() {

}

void selectionSort() {
  int temp;
  struct node *p, *q, *min;

  for(p = startSS; p -> link != NULL; p = p -> link) {
    min = p;

    for(q = p -> link; q != NULL; q = q->link) {
      if(min -> data > q -> data)
        min = q;
    }

    if(p != min) {
      temp = p -> data;
      p -> data = min -> data;
      min -> data = temp;
    } 
  }
}

void bubbleSort() {
  int temp;
  struct node *p, *q, *end;

  for(end = NULL; end != startBS -> link; end = p) {
    for(p = startBS; p -> link != end; p = p -> link) {
      q = p -> link;
      if(p -> data > q -> data) {
        temp = p -> data;
        p -> data = q -> data;
        q -> data = temp;
      }
    }
  }
}

void mergeSort() {
  
}

int main(){
  int opt, n, el;
  
  do{
    printf("\n--- MENU ---\n1. Selection Sort\n2. Bubble Sort\n3. Merge Sort\n4. Exit\n\tEnter Choice: ");
    scanf("%d", &opt);
  } while( opt < 1 || opt > 4 );

  switch (opt)
  {
   case 1: // Selection Sort
      printf("\nHow many elements do you wish to enter? -> ");
      scanf("%d", &n);
      while(n>0){
        printf("\nEnter element #%d: ", n);
        scanf("%d", &el);
        insert(el);
        n--;
      }

      selectionSort();
      break;

    case 2: // Bubble Sort
      // insert(startBS);

      bubbleSort();
      break;

    case 3: // Merge Sort
      // insert(startMS);
      
      mergeSort();
      break;

    case 4: // Exit
      printf("\nThanks for this progtam!\n");
      exit(1);
      break;

    default:
      break;
  }
}