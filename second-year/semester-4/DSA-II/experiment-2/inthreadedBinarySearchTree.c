// Implementation of insertion, deletion and traversal for fully in-threaded BST
#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *left, *right;
};

struct node *insert(struct node *start, int data){
  if(start == NULL){
    struct node *tmp = malloc(sizeof(struct node));
    tmp -> info = data;
    tmp -> left = NULL;
    tmp -> right = NULL;
    return tmp;
  }
  
  if(start -> info > data)
     start -> left = insert(start -> left, data);

  else if(start -> info < data)
    start -> right = insert(start -> right, data);
  
  else
    return start;
}

void display(struct node *start){
  if(start != NULL){
    printf("%d\n",start -> info);
    display(start -> left);
    printf("\t");
    display(start -> right);
  }
}


int main(){
  struct node *start = NULL;
  int i, n, opt, info;

  printf("Options: \n1. Add Element\n2. Delete Element\n3.")
  scanf("%d", &opt);

  switch(opt) {
    case 1: 
      printf("\nEnter Element to insert: ");
      scanf("%d", &info);
      start = insert(start, info);
      break;

    case 2:
      printf("\nEnter Element to be deleted: ");
      scanf("%d", &info);
  }


  display(start);
}
