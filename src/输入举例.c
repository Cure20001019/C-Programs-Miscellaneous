#include<stdio.h>
int main (){
int age ;
double rmb ;
printf (" Enter your age: ") ;
scanf ("%d", & age ) ;
printf (" Enter value in RMB : ") ;
scanf ("%lf", & rmb ) ;
printf ("you are %d and have %lf RMB\n", age , rmb );
return 0; 
}
