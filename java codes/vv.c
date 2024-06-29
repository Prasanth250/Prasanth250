import java.util.Scanner;
public class Result {
    public static void main(String[] args) 
    {
       int passcount=0;
       int failcount=0;
       Scanner sc=new Scanner(System.in);
       System.out.println("enter the student count");
       int numstudents=sc.nextInt();
       for(int i=0;i<=numstudents;i++)
       {
           System.out.println("Enter the marks of student "+ i +"=");
           int marks=sc.nextInt();
           if(marks<=35)
           {
               failcount++;
           }
           else
           passcount++;
       }
       System.out.println("Number of failed students "+failcount);
       System.out.println("Number of passed students "+passcount);
    }
}
