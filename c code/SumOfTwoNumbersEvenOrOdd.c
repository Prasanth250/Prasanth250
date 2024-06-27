//write a c program to accept two numbers and find their sum and even or odd.
#include <stdio.h>
int main() {
   int a,b,sum;
   printf("Enter the first number ");
   scanf("%d",&a);
   printf("Enter the second number ");
   scanf("%d",&b);
   sum=a+b;
   printf("sum of a and b is %d",sum);
   
   if(sum%2==0)
   printf("\nSum is Even");
   else
   printf("\nSum is Odd");
    return 0;
}
