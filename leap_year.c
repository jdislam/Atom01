#include <stdio.h>

int main(void)
{
   int y;

  printf("ENTER A YEAR\n");
   scanf("%d",&y);

   if( y%4==0 && (y%100!=0 || y%400==0) ) printf("LEAP");
   else printf("NOT LEAP");

  return 0;
}

// ( y%4==0 && (y%100!=0 || y%400==0) )
/*
  jodi kunu bochor 4 ta % jay + 100 dara % ja nay == leap year
   jodi kunu bochor 4 ta % jay + 400 dara % hoy taile == leap year

*/
