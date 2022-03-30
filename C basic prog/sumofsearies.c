#include<stdio.h>
#include<math.h>
int main() {
    float x,n,b,c,a,d = 0;

    printf("\nEnter the value of n: ");
    scanf("%f",&n);
    printf("\nEnter the value of x: ");
    scanf("%f",&x);

    b = x;

    for(c=1;c<=n;c++)
    {
        a = b/c;
        b = b*x;
        d = d+a;
    }
    printf("\nAnswer is : %f",d);
}