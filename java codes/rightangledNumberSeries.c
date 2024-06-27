//print the 10 rows right angled left justified numbers 
import java.io.*;
class rsn {
    public static void main(String[] args) {
        int row,num;
        for(row=1;row<=10;row++)
        {
            for(num=1;num<=row;num++)
            {
                System.out.print(num);
            }
            System.out.println();
        }
    }
}
