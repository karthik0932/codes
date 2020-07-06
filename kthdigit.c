#include <stdio.h> 
int kthdigit(int a, int b, int k) 
{
    int p = pow(a, b); 
  
    int count = 0; 
    while (p > 0 && count < k)
    {
        int rem = p % 10;  
        count++; 
        if (count == k) 
            return rem; 
        p = p / 10; 
    } 
   return 0; 
} 
void main() 
{ 
    int a, b,k;
    printf("Enter two  numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter the value of k:");
    scanf("%d",&k);
    printf("The Kth digit is %d", kthdigit(a, b, k)); 
} 
