//10 rows triangle inc numbers amd dec alphabet
public class program2
{
public static void main (String[] args)
{
char startChar = 'A';
for(int r=1;r<=10;r++)
{
for(int s=1;s<=10-r;s++)
{
System.out.print(" ");
}
for(int i=1;i<=r;i++)
{
System.out.print(i);
}
for(int j=r-1;j>=1;j--)
{
char ch = (char) (startChar+j-1);
System.out.print(ch);
}
System.out.println();
}
}
}
