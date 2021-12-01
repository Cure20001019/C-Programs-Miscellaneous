#include<stdio.h>
int main(){
    int x[10];
    int a=1;
    int s=0;
    float average;
    while (a<11){
    scanf("%d",&x[a]);
    a=a+1;
    }
    while (a>0){
        s=s+x[a];
        a=a-1;
    }
    average=s/10;
    while (a<11) {
        if (x[a]>average){
            printf("%d is above average\n",x[a]);
            a=a+1;
            }
		if (x[a]<average){
			 printf("%d is below average\n",x[a]);
             a=a+1;
		}
    }
    return 0;
}
