#include<stdio.h>
int main()
{
  int a,b,i;
  scanf("%d %d", &a, &b);
  for(i=1; i; i++)
  {
    if(a*i==b)
    {
      printf("Sao Multiplos\n");
    }
    else if(a*i!=b)
    {
      printf("Nao sao Multiplos\n");
    }
  }
  return 0;
}
