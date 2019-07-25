	#include<stdio.h>
#include<string.h>
int main(){
    int n,i;

    printf("Enter number of students:\n");
    scanf("%d",&n);

    struct student{
        char name[20];
        int rollno,age;
    }s[n];

    for(i=0;i<n;i++){
        printf("\nEnter Student #%d's name, rollno and age:\n",i+1);
        scanf("%s %d %d",&s[i].name,&s[i].rollno,&s[i].age);
    }

    for(i=0;i<n;i++){
        printf("\nStudent #%d's name = %s\nRollno = %d\nAge = %d\n\n",i+1,s[i].name,s[i].rollno,s[i].age);
    }
}
