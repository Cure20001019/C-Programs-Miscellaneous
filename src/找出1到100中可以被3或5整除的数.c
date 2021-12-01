#include<stdio.h>
int main(){
    int i=1;
    while (i<101){
        if(i%3==0){
        printf("%d\n",i);}
        else if(i%5==0){
            printf("%d\n",i);
        }
    i=i+1;
    }
}
