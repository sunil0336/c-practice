#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr,*ptr1,i,t=0;
    printf("\nEnter an no.: ");
    scanf("%d",&n);
    printf("\nEnter %d eliments\t",n);
    ptr = (int*) malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    printf("The numbers inputed are:\t \n");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    ptr1 = (int*)malloc(sizeof(int));
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)!=0){
            *(ptr1+t)=*(ptr+i);
            t++;
        }
    }
    printf("\nNon zero elements are \n");
    for(i=0;i<t;i++){
        printf("%d\t",*(ptr1+i));
    }

}