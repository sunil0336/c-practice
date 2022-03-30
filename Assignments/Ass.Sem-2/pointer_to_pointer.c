#include<stdio.h>
int main(){
    int var;
    int *ptr;   /* Pointer */
    int **ptr1; /* pointer to pointer */
    var =3000;
    ptr =&var;  /* take the address of var */
    ptr1 = &ptr;    /* take the address of ptr using address of oprater & */
    // take the value using ptr1
    printf("value of var: %d\n",var);   /* Prints value of var */
    printf("value avalabel at ptr: %d\n",*ptr);
    printf("value avalabel at ptr1: %d\n",**ptr1);
    /* Prints value of var */
    return 0;
}   