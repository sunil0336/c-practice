//light bill calculate
#include<stdio.h>
int main(){
    float c,l,unit,bill;
    printf("Enter current reading: ");
    scanf("%f",&c);
    printf("Enter last reading: ");
    scanf("%f",&l);
    unit = c - l;
    printf("\nunit consumed: %f",unit);
    if(unit<100)
        {
            bill= unit*3;
        }
    else if(unit > 100 && unit <=200)
        {
            bill= unit*3.5;
        }
    else if(unit > 200 && unit <=350)
        {
            bill= unit*4;
        }
    else if(unit > 350 && unit <= 500)
        {
            bill= unit*4.5;
        }
    else
        {
            bill= unit*5;
        }
        printf("bill=%f",bill);
    return 0;
}