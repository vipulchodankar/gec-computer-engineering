#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[]="world";

    printf("Enter a string: ");
    gets(str1);
    
	if(!strcmp(str2,str1))
        puts("\nEqual Strings");
    else    
        puts("\nNot Equal Strings");
	
	printf("\nString 1 Length = %d\n",strlen(str1));

	char *pos=strstr(str1,str2);
	if(pos){
		printf("\nString found at: ");
		puts(pos);
		printf("\n");
	}
	else {
	printf("\nString not found\n");}

    puts(strcat(str2,str1)); 
    
    printf("\nReversed String: ");
    puts(strrev(str1));
}
