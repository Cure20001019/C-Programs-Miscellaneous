#include <stdio.h>
int main(){
    int X[100],i;
    float sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&X[i]);
        sum=X[i]*1.0+sum;
    }
    sum/=10;
    printf("%f is the average of the numbers ",sum);
    for(i=0;i<10;i++){
        printf("%d ",X[i]);
    }
    return 0;
}
