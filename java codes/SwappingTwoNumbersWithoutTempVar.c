//swapping of two numbers without Temporary variable.
import java.util.Scanner;
public class Swapping
{
    public static void main (String[] args)
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the number ");
       int a=sc.nextInt();
       int b=sc.nextInt();
       System.out.println("Before Swapping a = " + a + " and b = " + b);
        a=a+b;
        b=a-b;
        a=a-b;
       System.out.println("After Swapping a = " + a + " and b = " + b);
    }
}