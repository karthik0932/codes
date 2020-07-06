# include <stdio.h>
# include <string.h>
void main()
{
  int n,x=0,i=1;
  printf("Enter a number: ");
  scanf("%d",&n);
  if (n <= 0)
  {  
            printf("Input a correct number."); 
            exit(0);
  }
  printf("The ugly numbers are :");
  while(i<=n)
  {
  
   while (i != 1) 
   {  
       if (i % 5 == 0) 
       {  
                n /= 5;  
       }
       else if (i % 3 == 0) 
       { 
            i /= 3;  
        } 
       else if (i % 2 == 0)
       {  
             i /= 2;  
       } 
       else 
       {   
             x = 1;  
             break;  
        }  
    } 
		 if (x==0)
		 { 
        printf("%d",i);
     }
     x=0;
     i++;
  }
}
