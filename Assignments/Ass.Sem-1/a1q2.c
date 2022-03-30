#include<stdio.h>
int main(){
    char n;
    printf("Enter an char: ");
    scanf("%c",&n);

    printf("\nEntered char: %c",n);
    printf("\nEntered char before: %c",n-2);
    printf("\nEntered char after: %c",n+2);
}