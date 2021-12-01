#include<stdio.h>
int main()
{
	int num1,num2;
	int a,b;
	int temp;
	scanf("%d%d",&num1,&num2);
	a=num1;
	b=num2;
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("\n最大公约数%d",a);
	return 0;
 input(); 
}
