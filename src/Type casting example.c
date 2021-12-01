# include <stdio.h>
int main () {
int number ;
float result ;
float maybeWrongResult ;
printf (" Enter a number to be divided by 3 \n") ;
scanf ("%d", & number ) ;
result = (( float ) number ) / 3;
maybeWrongResult = number / 3;
printf ("( with Casting ) %d / 3 = %.2 f \n", number , result ) ;
printf ("( without Casting ) %d / 3 = %.2 f \n", number , maybeWrongResult ) ;
}
