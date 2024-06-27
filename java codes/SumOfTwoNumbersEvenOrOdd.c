
//write a java program to accept two numbers and find their sum and even or odd.

import java.util.Scanner;
class EvenOddBySumOfTwoNum{
    public static void main(String[] args) {
        int a,b,sum;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the first number");
        a=sc.nextInt();
        System.out.println("enter the second number");
        b=sc.nextInt();
        sum=a+b;
        System.out.println(sum);
        if (sum%2==0)
        System.out.println("Sum of two numbers is even");
        else
        System.out.println("Sum of two numbers is even");
    }
}
