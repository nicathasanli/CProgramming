#include<stdio.h>
#include<math.h>
int main(){
    double radius;
    double area=0,volume=0;
    puts("Enter the radius of sphere:");
    scanf("%lf",&radius);
    area=4*M_PI*pow(radius,2);
    volume=(3*M_PI*pow(radius,3))/4;
    printf("The area of sphere is:%lf, the volume of sphere is:%lfm^3\n",area,volume);
    return 0;
}