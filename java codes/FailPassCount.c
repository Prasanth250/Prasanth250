//given set of examination marks in the range of 0-100,make a count of students that have passed the exam and failed the exam, pass mark above 35.

import java.util.Scanner;
public class Result {
    public static void main(String[] args) 
    {
       int passcount=0;
       int failcount=0;
       Scanner sc=new Scanner(System.in);
       System.out.println("enter the student count");
       int numstudents=sc.nextInt();
       for(int i=1;i<=numstudents;i++)
       {
           System.out.println("Enter the marks of student "+ i +"=");
           int marks=sc.nextInt();
           if(marks<=35)
           {
               failcount++;
           }
           else if(marks>=36 && marks<=100)
           passcount++;
           else
           System.out.println("enter valid marks in range (0-100)");
       }
       System.out.println("Number of failed students "+failcount);
       System.out.println("Number of passed students "+passcount);
    }
}
