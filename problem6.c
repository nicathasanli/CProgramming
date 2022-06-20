#include<stdio.h>
int max(int numbers[]);
int main(){
    int numbers[8];
    puts("Enter the numbers:");
    for(int i=0;i<8;i++){
        scanf("%d",&numbers[i]);
    }
    printf("The maximum is:%d",max(numbers));
}
int max(int numbers[]){
    int max;
    max=numbers[0];
    for(int i=0;i<8;i++){
        if(max<numbers[i]){
            max=numbers[i];
        }
    }
    return max;
}