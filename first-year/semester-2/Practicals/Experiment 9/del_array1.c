#include <stdio.h> 
int main()
{
   int arr[100], position, c, n;
 
   printf("Enter number of elements in array: ");
   scanf("%d", &n);
 
   printf("\nEnter %d elements:\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);
 
   printf("\nEnter the location where you wish to delete element: ");
   scanf("%d", &position);
 
   if (position >= n+1)
      printf("\nDeletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         arr[c] = arr[c+1];
 
      printf("\nResultant array:\n");
 
      for (c = 0; c < n - 1; c++)
         printf("%d\n", arr[c]);
   }
}
