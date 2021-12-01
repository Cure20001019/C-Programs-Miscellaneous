# include <stdio.h>
# include <string.h>
int main () {
char s1 [100] = "a quick brown fox"; 
char s2 [100] = "jumped over the lazy dog"; 
int i ;
i = strcmp ( s1 , s2 ) ;
printf (" Return Value : %d\n", i ) ;
if( i < 0) {
printf (" <%s> comes before <%s >\n", s1 , s2 ) ;
} else if ( i > 0) {
printf (" <%s> comes before <%s >\n", s2 , s1 ) ;
} else {
printf (" Both strings are equal \n") ;
}
}
