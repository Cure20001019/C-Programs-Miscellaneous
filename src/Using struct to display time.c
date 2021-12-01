#include<stdio.h>

struct time{
	int hour;
	int minute;
	int second;
}; 
void display(struct time t){
	printf("%02d:%02d:%02d",t.hour,t.minute,t.second);
}
int main(){
	struct time t1={12,0,0};
	display(t1);
}
