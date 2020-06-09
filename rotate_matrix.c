#include <stdio.h> 
void rotate(int a[][M], int k) 
{ 
  int temp[M];  
  k = k % M; 
  for (int i = 0; i < N; i++) 
  { 
    for (int t = 0; t < M - k; t++) 
      temp[t] = a[i][t]; 
    for (int j = M - k; j < M; j++) 
      a[i][j - M + k] = a[i][j]; 
    for (int j = k; j < M; j++) 
      a[i][j] = temp[j - k]; 
  } 
}  
void display(int a[][M])
{ 
  for (int i = 0; i < N; i++)
  { 
    for (int j = 0; j < M; j++) 
      printf("%d ", a[i][j]); 
    printf("\n");
  } 
} 
void main()
{
  int M,N,k,i,j;
  printf("Enter the size of the matrix:");
  scanf("%d%d",&M,&N);
  int a[M][N];
  printf("Enter the elements of array:");
  for(i=0;i<M;i++)
  {
    for(j=0;j<N;j++)
      scanf("%d",a[i][j]);
  }
  printf("Enter the number of rotations:");
  scanf("%d",k);
  printf("Matrix before roation:\n");
  for(i=0;i<M;i++)
  {
    for(j=0;j<N;j++)
    {
      printf("%d ",a[i][j]);
     }
     printf("\n");
   }
  rotate(a, k); 
  display(a);  
} 
