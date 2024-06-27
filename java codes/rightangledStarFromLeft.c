//print the 10 rows right angled left justified star *. 
import java.io.*;
class rsn {
    public static void main(String[] args) {
        int row,star;
        for(row=1;row<=10;row++)
        {
            for (int space=1;space<=10-row;space++)
            {
                System.out.print(" ");
            }
            for(star=1;star<=row;star++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
