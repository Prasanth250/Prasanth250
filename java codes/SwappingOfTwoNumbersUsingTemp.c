//swapping of three numbers using temporary variable in java
import java.util.Scanner;
public class Swapping
{
    public static void main (String[] args)
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the number ");
       int a=sc.nextInt();
       int b=sc.nextInt();
       int c=sc.nextInt();
       int t;
       System.out.println("Before Swapping a = " + a + " and b = " + b +" and c= "+c);
       t=a;
       a=b;
       b=c;
       c=t;
       System.out.println("After Swapping a = " + a + " and b = " + b+" and c= "+c);
    }
}
