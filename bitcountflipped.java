import java.util.*; 
  
class Bitcountflipped
{  
    public static int countSetBits(int n) 
    { 
        int count = 0; 
        while (n != 0)
        { 
            count++; 
            n &=(n-1); 
        } 
        return count; 
    }  
    public static int Flipped(int a, int b) 
    { 
        return countSetBits(a ^ b); 
    }  
    public static void main(String[] args) 
    { 
        int a,b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the two numbers:");
        a=s.nextInt();
        b=s.nextInt();
        System.out.print("The number of bits flipped:"+Flipped(a, b)); 
    } 
} 
