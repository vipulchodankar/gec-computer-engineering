#include<stdio.h>
struct book{
	char name[25];
	int price,no,sno;
}b[10];
int main()
{
	int i,n;
	printf("Enter the number of books:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nName: ");
		scanf("%s",&b[i].name);
		printf("Price: ");
		scanf("%d",&b[i].price);
		printf("Serial No.: ");
		scanf("%d",&b[i].sno);
		printf("Number: ");
		scanf("%d",&b[i].no);
	}
	int low=b[0].price;
	for(i=0;i<n;i++){
		printf("\nName: %s\nPrice: %d\nSerial No.: %d\nNumber: %d\n",&b[i].name,b[i].price,&b[i].sno,&b[i].no);
		if(low>b[i].price)
			low=b[i].price;
	}
	printf("\nLowest Price:%d\n",low);
}
