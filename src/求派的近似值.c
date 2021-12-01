#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	int flag=1;
	float sum=0.0;
	float item;

	do{
		item=flag*1.0/i;
		flag=-flag;
		i=i+2;
		sum=sum+item;
	}while(fabs(item)>0.00000001);
	printf("pi is %f",sum*4);
	return 0;
}
