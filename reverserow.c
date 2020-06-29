#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void reverseArray(int arr[M][N]) 
{ 
    for (int i = 0; i < M; i++) 
    { 
        int start = 0; 
        int end = N - 1;  
        while (start < end)
        { 
            swap(&arr[i][start],  &arr[i][end]); 
            start++; 
            end--; 
        } 
    }  
    printf("The reverse of rows of 2d array:\n");
    for (int i = 0; i < M; i++)
    { 
        for (int j = 0; j < N; j++)
        { 
            printf("%d", arr[i][j]); 
        } 
         printf("\n");
    } 
} 
void main() 
{ 
    int arr[][],N,M;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&M,&N);
    printf("Enter the array elements:\n");
    for(int i=0;i<=M;i++)
    {
      for(int j=0;j<=N;j++)
      {
        scanf("%d",&arr[i][j]);
      }
      printf("\n");
    }
    reverseArray(arr); 
} 
