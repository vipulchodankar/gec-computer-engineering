#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *last = NULL;

struct node *add_begin(struct node *last,int info)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if(last == NULL)
    {
        tmp -> data=info;
        last=tmp;
        tmp -> link=tmp;
        return last;
    }
    tmp -> data=info;
    tmp -> link=last -> link;
    last -> link=tmp;
    return last;
}

struct node *add_end(struct node *last,int item)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    if(last == NULL)
    {
        tmp -> data=item;
        last=tmp;
        tmp -> link=tmp;
        return last;
    }
    tmp -> data=item;
    tmp -> link=last -> link;
    last -> link=tmp;
    last=tmp;
    return last;
}

struct node *add_pos(struct node *last,int item,int info)
{
    struct node *tmp,*p;
    tmp=(struct node *)malloc(sizeof(struct node));
    if(last == NULL)
    {
        tmp -> data=info;
        last=tmp;
        tmp -> link=tmp;
        return last;
    }
    p=last -> link;
    while(p!=last&&p -> data!=item)
        p=p -> link;
    if(p -> link == last -> link&&p -> data!=item)
    {
        printf("Element not found!\n");
        return last;
    }
    else if(p -> link == last -> link&&p -> data!=item)
    {
        tmp -> link=p -> link;
        p -> link=tmp;
        last=tmp;
    }
    else
    {
        tmp -> data=info;
        tmp -> link=p -> link;
        p -> link=tmp;
        return last;
    }

    return last;
}

struct node *delete_node(struct node * last,int item)
{
    struct node *tmp,*p;
    if(last == NULL)
    {
        printf("No elements to be deleted \n");
        return last;
    }
    if(last -> link == last&&last -> data == item)
    {
            tmp=last;
            last=NULL;
            free(tmp);
            return last;
    }
    if(last -> link -> data == item)
    {
        tmp=last -> link;
        last -> link=tmp -> link;
        free(tmp);
        return last;
    }
    p=last -> link;
    while(p -> link!=last)
    {
        if(p -> link -> data == item)
        {
            tmp=p -> link;
            p -> link=tmp -> link;
            free(tmp);
            return last;
        }
        p=p -> link;
    }
    if(last -> data == item)
    {
        tmp=last;
        last=p;
        last -> link=tmp -> link;
        free(tmp);
        return last;
    }
    printf("item not found\n");
    return last;
}

void display(struct node *last)
{
    struct node *p;
    if(last == NULL)
    {
        printf("Empty list \n");
        return;
    }
    p=last -> link;
    do
    {
        printf("%d\t",p -> data);
        p=p -> link;
    } while(p!=last -> link);
    printf("\n");
    return;
}

int main()
{
    int ch,info,item;
    while(1)
    {
        printf("1 - insert begin. 2 -  insert end 3. - insert after item. 4 - delete. 5 - display. 6 - exit.\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter data :\t");
            scanf("%d",&info);
            last=add_begin(last,info);
            printf("\n");
            break;
        case 2:
            printf("Enter data :\t");
            scanf("%d",&info);
            last=add_end(last,info);
            printf("\n");
            break;
        case 3:
            printf("Enter item after which you want to insert :\t");
            scanf("%d",&item);
            printf("\nEnter data :\t");
            scanf("%d",&info);
            last=add_pos(last,item,info);
            printf("\n");
            break;
        case 4:
            printf("Enter element to be deleted: \n");
            scanf("%d",&info);
            last=delete_node(last,info);
            break;
        case  5:
            display(last);
            break;
        case 6:
            exit(1);
        }
    }
}
