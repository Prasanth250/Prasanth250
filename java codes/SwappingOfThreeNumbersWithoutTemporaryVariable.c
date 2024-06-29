//swapping three numbers without using temporary variable.

public class SwapThreeNumbers {
    public static void main(String[] args) {
        // Example numbers
        int a = 5;
        int b = 10;
        int c = 15;
        
        System.out.println("Before swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        
        // Swap logic without using a temporary variable
        a = a + b + c; // Sum of all three numbers (a + b + c) is stored in 'a'
        b = a - (b + c); // Subtract sum of b and c from 'a' to get new 'b'
        c = a - (b + c); // Subtract sum of b and c from 'a' to get new 'c'
        a = a - (b + c); // Subtract sum of b and c from 'a' to get new 'a'
        
        System.out.println("\nAfter swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
    }
}
