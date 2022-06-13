#include<stdio.h>
//The problem is to find the area and the volumne of cylinder
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
    printf("The area of cylinder is:%lf, the volume of cylinder is:%lf",area, volume);
    return 0;
}
