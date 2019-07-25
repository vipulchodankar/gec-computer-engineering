#include<stdio.h>
struct doctor
{
	char dr[25],q[10];
	int age,salary;
}d[50];
int main()
{
	int i,n;
	printf("Enter the number of doctors: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		printf("\nName: ");
		scanf("%s",&d[i].dr);
		printf("Qualification: ");
		scanf("%s",&d[i].q);
		printf("Age: ");
		scanf("%d",&d[i].age);
		printf("Salary: ");
		scanf("%d",&d[i].salary);
	}
	int high=d[0].salary;
	for(i=0;i<n;i++)
	{
		printf("\nName:%s\nQualification:%s\nAge:%d\nSalary:%d\n",d[i].dr,d[i].q,d[i].age,d[i].salary);
		if(high<d[i].salary)
			high=d[i].salary;
	}
	printf("\nHighest Salary: %d",high);
}
