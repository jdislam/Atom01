#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if(c>a)
  {
    if(d>b)
    {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
    }
    else if(b>d)
    {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c-1)-a, (d+60)-b);
    }
    else if(b==d)
    {
      printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", c-a);
    }
  }
  else if(c==a)
  {
    if(b==d)
    {
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(b>d)
    {
      printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", (d+60)-b);
    }
    else if(b<d)
    {
      printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", d-b);
    }
  }
  else if(c<a)
  {
    if(b>d)
    {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ((c-1)+24)-a, (d+60)-b);
    }
    else if(b<d)
    {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (c+24)-a, (d-b));
    }
    else if(b==d)
    {
      printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", (c+24)-a);
    }
  }

  return 0;
}
