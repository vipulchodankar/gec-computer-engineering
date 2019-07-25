#include<stdio.h>
int main(){
	float area, side, vol, r, h;
	int opt;
	printf("\tOptions:\n0. Volume of a cylinder\n1. Area of a square\nEnter: ");
	scanf("%d",&opt);
	switch(opt){
		case 0:{
			printf("\nEnter radius and height of cylinder:\n");
			scanf("%f %f",&r,&h);
			vol=3.14*r*r*h;
			printf("\n Volume of cylinder = %f\n",vol);
			break;
		}
		case 1:{
			printf("\nEnter side of square: ");
			scanf("%f", &side);
			area=side*side;
			printf("\nArea of square = %f\n",area);
			break;
		}
		default: printf("\n Please enter a valid option.\n"); break;
	}
}
