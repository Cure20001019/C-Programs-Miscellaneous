# include<stdio.h>
int main () {
printf (" Enter some text : ") ;
char text [20];
int i = 0;
text [ i ] = getchar () ;
while (i < 19&&text[ i ]!= '\n') {
i = i + 1;
text [ i ] = getchar () ;
}
text [ i ] ='\0';
printf (" You entered <%s>", text ) ;
}
