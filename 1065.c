#include<stdio.h>
int main()
{
  int n[5],i;
  int count=0;
  for(i=0;i<5;i++)
  {
    scanf("%d",&n[i]);
  }
  for(i=0;i<5;i++)
  {
    if(n[i]%2==0)
    {
      count++;
    }
  }
  printf("%d valores pares\n",count);
}
