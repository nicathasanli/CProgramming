#include<stdio.h>
int main(){
    int number1,number2;
    char operator;
    int result=0;
    puts("Enter the Numbers:");
    scanf("%d%d",&number1,&number2);
    puts("Enter the operator:");
    //scanf(" %c",&operator);
    operator=getchar();
    switch(operator){
        case '+':
            result=number1+number2;
            printf("%d+%d=%d",number1,number2,result);
            break;
        case '-':
            result=number1+number2;
            printf("%d+%d=%d",number1,number2,result);
            break;
        case '/':
            result=number1+number2;
            printf("%d+%d=%d",number1,number2,result);
            break;
        case '*':
            result=number1+number2;
            printf("%d+%d=%d",number1,number2,result);
            break;
            
    }
}