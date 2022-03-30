#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n;
int i,j,high;
printf("\nEnter size of array: ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
printf("memory not alaocated\n");

for (i = 0; i < n; i++)
{
    scanf("%d",(ptr+i));
}
high=*(ptr+0);
for ( j = 0; j < n; j++)
{
    if(*(ptr+j)>high)
    high=*(ptr+j);
}


printf("\n te larest element is: %d",high);
return 0;
}
