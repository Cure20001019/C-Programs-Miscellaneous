#include<stdio.h>
int main(){
	printf("Enter 5 integers:");
    int number[4];
    int i=0; 
	scanf("%d %d %d %d %d",&number[0],&number[1],&number[2],&number[3],&number[4]);
	while(i<5){
		printf("%d",number[i]);
		i=i+1; 
	} 
	return 0;
} 
