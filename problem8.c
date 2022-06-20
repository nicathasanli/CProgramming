#include<stdio.h>
int main(){
    int array[10];
    puts("Enter the elements of array:");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    puts("Array elements are:");
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}