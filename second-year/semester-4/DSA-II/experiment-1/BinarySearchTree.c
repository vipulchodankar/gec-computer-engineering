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
     start -> left = insert(start -> left,data);

  else if(start -> info < data)
    start -> right = insert(start -> right,data);
  
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
  int i, n;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int a[n];
  for(i = 0;i < n; i++){
    printf("Enter %d element: ", i+1);
    scanf("%d", &a[i]);
  }
  start = insert(start, a[0]);
  for(i = 1; i < n; i++)
    insert(start, a[i]);

  display(start);
}
