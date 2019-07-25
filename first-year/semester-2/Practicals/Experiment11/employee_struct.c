#include<stdio.h>
struct employee{
	char name[25],q[10];
	int age,salary;
}d[50];
int main(){
	int i,n;
	printf("Enter the number of employees: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){		
		printf("\nName: ");
		scanf("%s",&d[i].name);
		printf("Qualification: ");
		scanf("%s",&d[i].q);
		printf("Age: ");
		scanf("%d",&d[i].age);
		printf("Salary: ");
		scanf("%d",&d[i].salary);
	}
	for(i=0;i<n;i++)
		if(d[i].salary>20000)
		printf("\nName: %s\nQualification: %s\nAge: %d\nSalary: %d\n",d[i].name,d[i].q,d[i].age,d[i].salary);
}	
