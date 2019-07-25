#include<stdio.h>
int main(){
	int day;
	printf("Enter day of week i.e. 1:\n");
	scanf("%d",&day);
	switch(day){
		case 1: printf("\nDay %d is Monday\n",day); break;
		case 2: printf("\nDay %d is Tuesday\n",day); break;
		case 3: printf("\nDay %d is Wednesday\n",day); break;
		case 4: printf("\nDay %d is Thursday\n",day); break;
		case 5: printf("\nDay %d is Friday\n",day); break;
		case 6: printf("\nDay %d is Saturday\n",day); break;
		case 7: printf("\nDay %d is Sunday\n",day); break;
		default: printf("\nEnter a valid day of the week(number)"); break;
	} 

}
