#include<stdio.h>
double average(int array[],int size);
int main(){
    int size;
    puts("Enter the size of array:");
    scanf("%d",&size);
    int array[size];
    puts("Enter the elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("The average of array is:%lf",average(array,size));
    return 0;
}
double average(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    return 1.0*sum/size;
}