#include<stdio.h>

void main(){
int *ptr,n;
int *rev;

printf("\nEnter size of array: ");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
printf("Enter the element in array: ");
for (int i = 0; i < n; i++)
{
    scanf("%d",(ptr+i));
}
rev =(int*)malloc(n*sizeof(int));
for ( int i = n, j=0; i > j; i--, j++)
{
    //swap the elements 
    int tmp = *(ptr+j);
    *(ptr+j) = *(ptr+i);
    *(ptr+j) =  tmp;
}

for (int i = 0; i < n; i++)
{
    printf("%d",(*rev+i));
}
}