# include <stdio.h>
# define ARRAY_SIZE 10
int main () {
int numbers [ ARRAY_SIZE ];
/* code to get the user to enter the
specified amount of numbers */
printf (" Please enter %d numbers \n",
ARRAY_SIZE ) ;
int i = 0;
while ( i < ARRAY_SIZE ) {
scanf ("%d", & numbers [ i ]) ;
i = i + 1;
}
}
