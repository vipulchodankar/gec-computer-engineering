#include<stdio.h>
#include<stdlib.h>
int main(){
	char c;
	FILE *f1, *f2;
	
	f1=fopen("file1.txt","r");
	if( f1 == NULL){
		printf("Cannot read file1.\n");
		exit(0);
	}
	
	f2=fopen("file2.txt","w");
	if(	f2 == NULL){
		printf("Cannot open file2.\n");
		exit(0);
	}

	c=fgetc(f1);
	while(c!=EOF){
		fputc(c, f2);
		c=fgetc(f1);
	}
	
	printf("Copied content from file1 to file2.\n");
	fclose(f1);
	fclose(f2);
}
