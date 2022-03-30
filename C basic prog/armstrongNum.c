#include<stdio.h>
int main()
{
   int number,remainder,total=0,temp;
   printf("Enter the number= ");
   scanf("%d",&number);
   temp=number;
      while(number>0)
   {
      remainder=number%10;
      total=total+(remainder*remainder*remainder);
      number=number/10;
   }
   if(temp==total)
      printf("number is armstrong");
   else
      printf("number is not armstrong");
      return 0;
}