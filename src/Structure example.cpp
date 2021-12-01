#include<stdio.h>
#include<stdlib.h>
struct time
{
int hour ;
int minute ;
int second ;
};
int main (void) {
struct time now, next ;
printf ( " Please enter the time now ( h m s ) : " ) ;
scanf ( "%d %d %d ", &now.hour, &now.minute, &now.second ) ;
printf ( " The time in now is : %02d:%02d:%02d \n ", now.hour, now.minute , now.second ) ;
next.hour = (now.hour + 1 )%24;
next.minute = now.minute;
next.second = now.second;
printf ( " The time in 1 hour will be : %02d:%02d:%02d \n ", next.hour, next.minute,next.second ) ;
printf ( "Finished!\n " ) ;
return 0;
}
