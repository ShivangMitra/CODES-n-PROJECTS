#include<stdio.h>
 
int main() 
{
   int i, j, k, size;
 
   printf("enter array size\n");
   scanf("%d", &size);

   int arr[size];
 
   printf("enter elements of your array\n");
   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
 
   printf("array with removed duplicates\n");
   for (i = 0; i < size; i++) 
   {
      for (j = i + 1; j < size;) 
      {
        if (arr[j] == arr[i]) 
        {
            for (k = j; k < size; k++) 
            {
               arr[k] = arr[k + 1];
            }
            size--;
         } 
        else
        j++;
      }
   }
 
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
 
   return 0;
}