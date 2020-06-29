#include <stdio.h>

int power (int x, int y);


void
main ()

{
  
	int a, b, k;
 
        int count = 0, num, n;

        printf ("Enter the value of a,b and k");
  
	scanf ("%d%d%d", &a, &b, &k);
  
	num = power (a, b);
  
	while (num > 0 && count < k)
    
	{
      
		n = num % 10;
      
		count++;
      
		if (count == k)
	
		{
	  
			printf ("%d", n);
	  
			break;
	
		}
      
		num = num / 10;
    
	}

}


int
power (int x, int y)

{
  
	if (y == 0)
    
		return 1;
  
	else if (y % 2 == 0)
    
		return power (x, y / 2) * power (x, y / 2);
  
	else
    return x * power (x, y / 2) * power (x, y / 2);

}
