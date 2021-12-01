# include <stdio.h>
# include <string.h>
int main () {
char s1 [100] = "a quick brown fox "; 
char s2 [100] = " jumped over the lazy dog"; 
strcat ( s1 , s2 );
printf (" <%s>", s1 ) ;
}
