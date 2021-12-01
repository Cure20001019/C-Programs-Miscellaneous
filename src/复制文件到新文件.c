#include<stdio.h>
#include<stdlib.h>
void copy(char in[100], char out[100]){
	int c;
    FILE  *fp1=fopen(in,"r"); 
	FILE  *fp2=fopen(out,"w");
	if ( fp1 == NULL ) /* check does file exist etc */
{ 
printf( "Cannot open %s for reading \n",in);
exit(1); /* terminate program */
}
else if ( fp2 == NULL )
{ 
printf( "Cannot open prog.old for writing\n" );
exit(1); /* terminate program */
}
    while((c=getc(fp1)) != EOF){
    	putc(c,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("File successfully copied");
	
} 
int main(){
	char in[100]="复制文件到新文件.c";
	char out[100]="prog.txt";
	copy(in,out);
} 
