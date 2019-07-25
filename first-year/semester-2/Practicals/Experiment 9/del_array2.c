#include <stdio.h> 
int main()
{
   int arr[100], c, n;
 
   printf("Enter number of elements in array: ");
   scanf("%d", &n);
 
   printf("\nEnter %d elements:\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);
 
      for (c = 0; c < n - 1; c++)
         arr[c] = arr[c+1];
 
      printf("\nResultant array:\n");
 
      for (c = 0; c < n - 1; c++)
         printf("%d\n", arr[c]);
}
