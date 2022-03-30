#include<stdio.h>
int main(){
    float l,r,h;
    printf("length of the cone: ");
    scanf("%f",&l);
    printf("radius of the cone: ");
    scanf("%f",&r);
    printf("hight of the cone: ");
    scanf("%f",&h);
    printf("the surface area is: %f\n",3.14*r*(l+r));
    printf("the volume is: %f",3.14*r*r*h*1/3);
    
}