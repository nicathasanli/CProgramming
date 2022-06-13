#include<stdio.h>
int main(){
    int month;
    puts("Enter the month number");
    switch(month){
        case 1:
        printf("The first month is January\n");
        break;
        case 2:
        printf("The second month is February\n");
        break;
        case 3:
        printf("The third month is March\n");
        break;
        case 4:
        printf("The fourth month is April\n");
        break;
        case 5:
        printf("The fifth month is May\n");
        break;
        case 6:
        printf("The sixth month is June\n");
        break;
        case 7:
        printf("The seventh month is July\n");
        break;
        case 8:
        printf("The eighth month is August\n");
        break;
        case 9:
        printf("The ninth month is September\n");
        break;
        case 10:
        printf("The tenth month is October\n");
        break;
        case 11:
        printf("The eleventh month is November\n");
        break;
        case 12:
        printf("The twelfth month is December\n");
        break;
        default:
        printf("Enter correct month number");
    }
}