
#include <stdio.h> 
#include <stdlib.h> 
  
void displayMatrix (int *arr, int n) {
   for (int i = 0; i <  n; i++) {
      for (int j = 0; j < n; j++) 
         printf("%d ", *(arr + i*n + j)); 
      printf("\n");
   }
}

int main() 
{ 
   int n;
   scanf("%d", &n);
   int *arr1 = (int *)malloc(n * n * sizeof(int)); 
   int *arr2 = (int *)malloc(n * n * sizeof(int)); 
   int *arrTong = (int *)malloc(n * n * sizeof(int)); 
   int *arrTich = (int *)malloc(n * n * sizeof(int));

   //input array 1
   for (int i = 0; i <  n; i++) 
      for (int j = 0; j < n; j++)
         scanf("%d", (arr1 + i*n + j));

   //input array 2
   for (int i = 0; i <  n; i++) 
      for (int j = 0; j < n; j++) 
         scanf("%d", (arr2 + i*n + j));

   // Tong 2 arrays together
   for (int i=0; i<n; i++)
      for (int j=0; j<n; j++) 
         *(arrTong + i*n + j) = *(arr1 + i*n + j) + *(arr2 + i*n + j);

   // Tich 2 array together
   for (int i=0; i<n; i++)
      for (int j=0; j<n; j++) {
         *(arrTich + i + j)= 0; // initial array tich
         for (int k=0; k<n; k++)
            *(arrTich + i + j) += *(arr1 + i + k) * *(arr2 + k + j);
      }

   // displayMatrix(arrTong, n);
   displayMatrix(arrTich, n);
    
   return 0; 
} 