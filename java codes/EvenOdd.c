import java.util.Scanner;
class EvenOdd {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        System.out.println("Enter the number");
        int num=reader.nextInt();
        if(num%2==0)
        System.out.println("Given number is even ");
        else
        System.out.println("Given Number is odd  ");
    }
}
