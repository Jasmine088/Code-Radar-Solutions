#include <stdio.h>
#include <math.h>
int main(){
    double r,area;
    scanf("%lf",&r);
    area= M_PI * (r**2);
    printf("Area: %.2lf",area);
}