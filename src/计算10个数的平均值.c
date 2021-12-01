#include<stdio.h>
int main(){
    int numbers[10];
    int i=0;
    float sum;
    while (i<10){
        scanf("%d",&numbers[i]);
        sum=numbers[i]+sum;
        i=i+1;
    }
    sum=sum/10;
    printf("The average is %f",sum);
    return 0; 
}
