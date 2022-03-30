//swap 2 no. without using 3ed variable
#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);
int main(){
    int a=10,b=20;
    printf("\nbefore swaping\ta=%d\tb=%d",a,b);
    swap(&a,&b);
    printf("\nafter swaping\ta=%d\tb=%d",a,b);     
    return 0;
}
void swap(int*x,int*y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}