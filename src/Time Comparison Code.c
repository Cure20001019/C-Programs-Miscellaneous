#include<stdio.h>
#include<sys/time.h>
long long sumN1 ( long long n ){
  long long s = 0;
  long long j = 0;
  while ( j < n ) {
  s = s + ( j + 1) ;
  j = j + 1;
  } 
  return s ;
}
long long sumN2(long long n){
	long long s = n * ( n + 1) /2;
    return s ;
} 
int main () {
  struct timeval tv1,tv2,tv3;
  long long number;
  scanf ("%llu", &number );
  gettimeofday (&tv1, NULL);
  sumN1 (number) ;
  gettimeofday (&tv2, NULL);
  sumN2 (number);
  gettimeofday (&tv3, NULL);
  double time1 = (( tv2.tv_usec - tv1.tv_usec )/1000000.0 + (double)( tv2.tv_sec - tv1.tv_sec ) ) ;
  double time2 = (( tv3.tv_usec - tv2.tv_usec )/1000000.0 + (double)( tv3.tv_sec - tv2.tv_sec ) ) ;
  printf (" sumN1 = %f seconds \n", time1 ) ;
  printf (" sumN2 = %f seconds \n", time2 ) ;
}
