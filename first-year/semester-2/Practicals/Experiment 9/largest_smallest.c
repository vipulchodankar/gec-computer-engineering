#include <stdio.h> 
int main()
{
   int arr[100], c, n, max, min;
 
   printf("Enter number of elements in array: ");
   scanf("%d", &n);
 
   printf("\nEnter %d elements:\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);
 
 	max=arr[0];
 	min=arr[0];
 	for (c = 0; c < n; c++){
 		if(arr[c]>max)
 			max=arr[c];
 		if(arr[c]<min)
 			min=arr[c];
	 }
	 
	 printf("\nLargest Element = %d\nSmallest Element = %d\n",max,min);
}
