#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char *name;
    float wght;
};
void selectionChar(struct student st[],int n){
int i,j,min;
struct student temp;
printf("The unsorted array is:\t");
for(i=0;i<n;i++){
printf("\n%d %.2f %s",i,st[i].wght ,st[i].name);
}
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){

if(strcmp(st[j].name,st[min].name)>0){
min=j;
}
}
if(min!=i){
temp=st[i];
st[i]=st[min];
st[min]=temp;
}
}
printf("\nThe sorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}
}
void selectionFlt(struct student st[],int n){
int i,j,min;
struct student temp;
printf("The unsorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){

if(st[min].wght>st[j].wght){
min=j;
}
}
if(min!=i){
temp=st[i];
st[i]=st[min];
st[min]=temp;
}
}
printf("The sorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}

}
void BubleChar(struct student st[], int n){
int i,j,exchange;
struct student temp;
printf("The unsorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}
for(i=0;i<n-1;i++){
exchange=0;
for(j=0;j<n-1;j++){
if(strcmp(st[j].name,st[j+1].name)>0){
temp=st[j];
st[j]=st[j+1];
st[j+1]=temp;
}
}
if(!exchange){
	printf("The sorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}

return;
}

}
}
void BubleFlt(struct student st[], int n){
int i,j,exchange;
struct student temp;
printf("The unsorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}
for(i=0;i<n-1;i++){
exchange=0;
for(j=0;j<n-1;j++){
if(st[j].wght>st[j+1].wght){
temp=st[j];
st[j]=st[j+1];
st[j+1]=temp;
}
}
if(!exchange){
printf("The sorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}

return;
}

}
}
void InsertionSortChar(struct student st[],int n){


 int i, j;
    struct student temp;

    for( i = 1 ; i < n ; i++)
    {
        temp = st[i];

        for( j = i - 1 ; ( ( j >= 0 ) && ( strcmp( temp.name, st[j].name ) < 0 ) ) ; j-- )
            st[j+1] = st[j];
        
        st[j+1] = temp;


// int i,j,notSorted=1;

// struct student temp;
// printf("The unsorted array is:\n");
// for(i=0;i<n;i++){
// printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
// }
// while(notSorted){
// notSorted=0;
// for(i=1;i<n;i++){
// temp=st[i];
// for(j=i-1;j>=0 && strcmp(st[j].name,temp.name)<0;j--){
// st[j+1]=st[j];
// notSorted=1;
// }
// st[j]=temp;
}

printf("The sorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}

}
void InsertionSortFlt(struct student st[],int n){
int i,j;
struct student temp;
printf("The unsorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}
for(i=1;i<n;i++){
temp=st[i];
for(j=i-1;j>=0 && st[j].wght<temp.wght;j--){
st[j+1]=st[j];
}
st[j+1]=temp;
}
printf("The sorted array is:\n");
for(i=0;i<n;i++){
printf("%d %.2f %s\n",i,st[i].wght ,st[i].name);
}
}
int main(){
struct student students[]={
        {"DFG", 12},
        {"ABC", 14},
        {"DXC", 44},
        {"FAG", 42},
        {"BFQ", 82},
        {"FFG", 22},
        {"DAF", 62}
    };
//printf("%s",students[0].name);
while(1){

printf("Enter an option in the menu\n");
printf("1 for selection sort on character\n");
printf("2 for selection sort on float\n");
printf("3 for insertion sort on character\n");
printf("4 for insertion sort on float\n");
printf("5 for bubble sort on character\n");
printf("6 for bubble sort on float\n");
printf("7 to exit\n");
int opt;
scanf("%d",&opt);
switch(opt){
case 1:
selectionChar(students,6);
break;
case 2:
selectionFlt(students,6);
break;
case 3:
BubleChar(students,6);
break;
case 4:
BubleFlt(students,6);
break;

case 5:
InsertionSortChar(students,6);
break;
case 6:
InsertionSortFlt(students,6);
break;
default:
exit(0);
}
}
}
