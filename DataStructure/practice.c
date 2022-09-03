// #include<stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int element,n;
//     bool isfound=false;
//     printf("Enter n value: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter array elements:\n");
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&arr[j]);
//     }
//     int size = sizeof(arr)/sizeof(int);
//     printf("Enter search element: ");
//     scanf("%d",&element);
//     int index;

//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==element)
//         {
//             index=i;
//             isfound=true;
//             break;
//         }
//     }
//     if(isfound)
//     {
//         printf("your element %d is fount in array at index: %d",element,index);
//     }
//     else
//     {
//         printf("not found");
//     }

//     printf("\nSize is: %d",size);
//     return 0;
// }

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