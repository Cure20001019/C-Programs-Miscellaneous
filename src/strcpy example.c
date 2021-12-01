# include <stdio.h>
# include <string.h>
int main () {
char name [100] , copy [100];
printf (" Enter your name : ");
gets ( name ) ;
strcpy ( copy , name ) ;
printf ("You entered %s \n", copy );
}
