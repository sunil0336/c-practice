#include<stdio.h>
int main(){
    int var=20;     //actual variable declaration
    int *ip;        //pointer variable declaration       
    ip=&var;        //stoare address of var in pointer variable
    printf("address of var variable: %x\n",var);    /*address stored in pointer variable*/
    printf("address stored variable: %x\n",ip);
    printf("value of *ip variable: %d\n",*ip);      //20
    return 0;
}