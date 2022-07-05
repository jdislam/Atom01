#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d", &a,&b);
  c=24-a;
  d= c+b;
  if(d<=24)
  {
    printf("O JOGO DUROU %d HORA(S)\n", d);
  }
  else
  {
    printf("O JOGO DUROU %d HORA(S)\n", d-24);
  }
  return 0;
}
