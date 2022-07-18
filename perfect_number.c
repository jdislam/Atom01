/*
n = 6
1 2 3 6 factor
1 2 3 proper factor
jodi proper factor er sum == n taile oi n ekta perfect number
*/

#include<stdio.h>
int main(void)
{
   int i,n,sum=0;
   printf("ENTER A NUMBER = ");
   scanf("%d",&n);

      for(i=1;i<n;i++)
      {
        if(n%i==0)
        {
           sum = sum + i;
        }
      }
      if(sum == n) printf("PERFECT NUMBER\n");
      else printf("NOT A PERFECT NUMBER");

  return 0;
}
