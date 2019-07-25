#include <stdio.h> 
int main()
{
   int arr[100], c, n;
 
   printf("Enter number of elements in array: ");
   scanf("%d", &n);
 
   printf("\nEnter %d elements:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);
 
 
	printf("\nResultant array of Even Elements:\n");
    for (c = 0; c < n ; c++)
    	if(arr[c]%2==0)
        	printf("%d\n", arr[c]);
}
