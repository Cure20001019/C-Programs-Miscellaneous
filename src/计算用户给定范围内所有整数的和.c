#include<stdio.h>
int main(){
    int a,b,c,d;
    c=0;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    d=a;
    while(d<=b){
        c=c+d;
        d=d+1;
    }
    printf("The sum of the values between %d and %d is %d",a,b,c);
    return 0;
}
