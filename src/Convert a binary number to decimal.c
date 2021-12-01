#include<stdio.h>
int main(){
int i=0,j;
int f[]={1,0,0,1,0,1,1,1};
for(j=0;j<8;j++){
	i=i+(f[j]<<(8-j-1));
}
printf("%d\n", i);
} 
