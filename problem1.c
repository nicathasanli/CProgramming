#include<stdio.h>
#include<math.h>
int main(){
    double area=0, volume=0;
    double height, radius;
    puts("Enter the height of cylinder:");
    scanf("%lf",&height);
    puts("Enter the radius of cylinder:");
    scanf("%lf",&radius);
    area=2*M_PI*radius*(height+radius);
    volume=M_PI*pow(radius,2)*height;
    printf("The area of cylinder is:%lf, the volume of cylinder is:%lf\n",area, volume);
    return 0;
}
//for running the problem 1: gcc problem1.c -o problem1 -lm
// ./problem1