/// 1 to 1000 how much real number??
#include<stdio.h>
int main()
{
  int a,b,sum=0,p,i;
  scanf("%d %d", &a, &b);
  for(i=1; i<=a; i++)
  {

    if(a%i==sum)
    {
      sum+=a;
      printf("Real Number\n");
    }
    else
    {
      printf("Not Real Number\n");
    }
  }
  return 0;
}
