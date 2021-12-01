#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	do
	{
		scanf("%d",&n);
		if(n%2==0)
	        sum=sum+n;      
	}while(n>0);
	printf("sum=%d",sum);
	
	return 0;
 } 
