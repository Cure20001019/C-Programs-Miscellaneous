/*? Create a file, ¡°data.txt¡±, that contains the following values:
1 5 3 7 2
The values are ¡°space delimited¡± ¨C there is a single space 
between each number.
Write a program that reads in the values from the file and prints 
out a horizontal bar chart:
1 | *
5 | *****
3 | ***
7 | *******
2 | **                                                                */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int value,i=0;
	FILE *fp=fopen("data.txt","r");
	if( fp==NULL ){
		printf("Failed to open file");
		exit(1);
	}
   fscanf( fp, "%d", &value );
   while ( !feof(fp) ) {
   printf( "%d | ", value );
   while( i < value ) {
        printf( "*" ); // could also use putchar( '*' );
        i++;     
	}
	i=0;
    printf( "\n" );
    fscanf( fp, "%d", &value );
    }
	fclose(fp);
    }
