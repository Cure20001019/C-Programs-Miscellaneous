#include<stdio.h>
#include <stdlib.h>
struct time
{ int hour;
  int minute;
  int second;
};
int main(void){
	struct time lunchtime = { 11,30, 0} ;
	struct time *timep; 
	timep=&lunchtime; 
printf("The hour is : %d ", (*timep).hour);
return 0;
}
