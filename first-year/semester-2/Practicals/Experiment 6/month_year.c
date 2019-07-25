#include<stdio.h>
int main(){
	int Month;
	printf("Enter month number:\n");
	scanf("%d",&Month);
	switch(Month){
		case 1: printf("\nMonth %d is January\n",Month); break;
		case 2: printf("\nMonth %d is February\n",Month); break;
		case 3: printf("\nMonth %d is March\n",Month); break;
		case 4: printf("\nMonth %d is April\n",Month); break;
		case 5: printf("\nMonth %d is May\n",Month); break;
		case 6: printf("\nMonth %d is June\n",Month); break;
		case 7: printf("\nMonth %d is July\n",Month); break;
		case 8: printf("\nMonth %d is August\n",Month); break;
		case 9: printf("\nMonth %d is September\n",Month); break;
		case 10: printf("\nMonth %d is October\n",Month); break;
		case 11: printf("\nMonth %d is November\n",Month); break;
		case 12: printf("\nMonth %d is December\n",Month); break;
		default: printf("\nEnter a valid Month of the Year(number)"); break;
	} 

}
