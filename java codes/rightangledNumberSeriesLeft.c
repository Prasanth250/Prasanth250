
import java.io.*;
class rsn {
    public static void main(String[] args) {
        int row,num;
        for(row=1;row<=10;row++)
        {
            for (int space=1;space<=10-row;space++)
            {
                System.out.print(" ");
            }
            for(num=1;num<=row;num++)
            {
                System.out.print(num);
            }
            System.out.println();
        }
    }
}
