#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *link;
  int info;
};

struct node* createList(struct node *last);
void display(struct node* last);
struct node* addEmpty(struct node *last, int data);
struct node* addBeg(struct node *last, int data);
struct node* addEnd(struct node *last, int data);
struct node* addAfter(struct node *last, int data, int item);
struct node* addDel(struct node *last, int data);

int main () {
  int choice, data, item;
  struct node* last = NULL;

  printf("\n1. Create List\n2. Display\n3. Add to Empty List\n4. Add at beginning\n5. Add at end\n6. Add after\n7. Delete\n8.Exit\nEnter choice: ");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
      last = createList(last);
      break;

    case 2:
      display(last);
      break;

    case 3:
      printf("\nEnter data to be entered in empty list: ");
      scanf("%d", &data);
      break;

    case 4:
      printf("\nEnter data to be entered at beginning: ");
      scanf("%d", &data);
      break;

    case 5:
      printf("\nEnter data to be entered at end: ");
      scanf("%d", &data);
      addBeg(last, data);
      break;
      
    case 6:
      printf("\nEnter data to be entered after an element: ");
      scanf("%d", &data);
      break;
  
    case 7:
      printf("\nEnter data to be deleted: ");
      scanf("%d", &data);
      break;

    case 8:
      printf("\nThanks for using this program!");
      exit(1);
    
    default:
      printf("\nEnter a valid choice");
      main();
  }
}

struct node* createList(struct node* last) {

}

void display(struct node* last) {
  struct node* p;
  if(last == NULL) {
    printf("\nList is empty");
  }

  p = last -> link;
  printf("\nElements are: \n");
  do {
    printf("%d\t", p -> info);
    p = p -> link;
  } while(p != last -> link);
}

struct node* addBeg(struct node *last, int data) {
  struct node* tmp;
  tmp = (struct node*) malloc (sizeof(struct node*));

  tmp -> info = data;
  tmp -> link = last -> link;
  last -> link = tmp;
  return last;
}

struct node* addEmpty(struct node *last, int data) {}
struct node* addBeg(struct node *last, int data) {}
struct node* addEnd(struct node *last, int data) {}
struct node* addAfter(struct node *last, int data, int item) {}
struct node* addDel(struct node *last, int data) {}