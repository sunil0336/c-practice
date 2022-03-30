#include<stdio.h>
int main(){
    int i;
    int a[8] = {1,2,3,4,5,6,7,8};
    int *p =a ; // same as int*p = &a[0]
    for (i=0;i<8;i++){
        printf("%d",*p); 
        p++;
    }
    return 0;
}