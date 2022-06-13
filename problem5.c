#include<stdio.h>
//Simple Calculator
int main(){
    double number1,number2;
    char operator;
    double result=0;
    puts("Enter the Numbers:");
    scanf("%lf%lf",&number1,&number2);
    puts("Enter the operator:");
    //scanf(" %c",&operator);
    getchar();
    operator=getchar();
    switch(operator){
        case '+':
            result=number1+number2;
            printf("%lf+%lf=%lf\n",number1,number2,result);
            break;
        case '-':
            result=number1-number2;
            printf("%lf-%lf=%lf\n",number1,number2,result);
            break;
        case '/':
            result=number1/number2;
            printf("%lf/%lf=%lf\n",number1,number2,result);
            break;
        case '*':
            result=number1*number2;
            printf("%lf*%lf=%lf\n",number1,number2,result);
            break;
        default:
        printf("Incorrect operator");
    }
    return 0;
}