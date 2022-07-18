#include<stdio.h>

// amar ekhon ekta function lagbe

int perfect(int n)
{
  int i,sum=0;

  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum = sum + i;
    }
  }
  if (sum == n) return 1;
      else return 0;
}

int main(void)
{
   int i,x,y;
    printf("ENTER THE RANGE LIMITS");
    scanf("%d %d",&x,&y);

   for(i=x;i<=y;i++)
   {
       if(perfect(i)==1) printf("%d ",i);
   }

  return 0;
}
