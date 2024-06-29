 //10 rows rhombus inc and dec numbers

public class program
{
   public static void main (String[] args)
    {
        int row,space,inc,dec;
        for(row=1;row<=10;row++)
        {
            for(space=1;space<=10-row;space++)
            {
                System.out.print(" ");
            }
            for(inc=1;inc<=row;inc++)
            {
                System.out.print(inc);
            }
            for(dec=row-1;dec>=1;dec--)
            {
                System.out.print(dec);
            }
            System.out.println();
        }
            for(row=9;row>=1;row--)
            {
              for(space=1;space<=10-row;space++)
            {
                System.out.print(" ");
            }
            for(inc=1;inc<=row;inc++)
            {
                System.out.print(inc);
            }
            for(dec=row-1;dec>=1;dec--)
            {
                System.out.print(dec);
            }
            System.out.println();
            }
    }
}
