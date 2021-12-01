#include<stdio.h>
int main(){
    int numbers[10];
    int i=0;
    int max=numbers[0];
    while (i<10){
        scanf("%d",&numbers[i]);
        if(numbers[i]>max){
            max=numbers[i];
        }
        i=i+1;
}printf("The biggest is %d",max);
return 0;
}
