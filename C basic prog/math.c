#include<stdio.h>
#include<math.h>
main()
{
int n;
double pr,n1,p,a,f,sqr,algNo;
do
{
printf("\nEnter your choice");
printf("\n 1.Power or e^x \n 2.Square Root\n 3.sine\n 4.cosine\n 5.log\n 6.Exit\n");
scanf("%d",&n);
switch(n)
{
case 1: printf("Enter a no and power: ");
  scanf("%lf%lf",&n1,&p);
  printf("%f",pow(n1,p));
  break;
case 2: printf("Enter a no: ");
  scanf("%lf",&a);
  sqr=sqrt(a);
  printf("%f",sqr);
  break;
case 3: printf("Enter a no: ");
  scanf("%lf",&algNo);
  printf("%f",sin(algNo));
  break;
case 4: printf("Enter a no: ");
  scanf("%lf",&algNo);
  printf("%f",cos(algNo));
  break;
case 5: printf("Enter a no");
  scanf("%lf",&algNo);
  printf("%f",log(algNo));
  break;
}
}while(n!=5);
}