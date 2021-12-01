#include<stdio.h>
int main()
{ printf(" What is your favourite colour ?"); 
  char colour[20];
  gets( colour );
  printf("I like %s\n", colour );
  return 0; 
}
