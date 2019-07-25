#include<stdio.h>
int main(){
	char c;
	printf("Enter an alphabet: ");
	scanf("%c",&c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		printf("\n%c is a vowel.\n",c);
	else
		printf("\n%c is a consonant\n",c);
}
