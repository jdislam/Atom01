#include<stdio.h>
int main()
{
  float a;
  scanf("%f",&a);
  if(a>0 && a<=400)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 % %\n",(a+(a*.15)), (a*.15));
  }
  else if(a>400 && a<=800)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 % %\n",(a+(a*.12)), (a*.12));
  }
  else if(a>800 && a<=1200)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 % %\n",(a+(a*.10)), (a*.10));
  }
  else if(a>1200 && a<=2000)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 % %\n",(a+(a*.7)), (a*.7));
  }
  else if(a>2000)
  {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 % %\n",(a+(a*.4)), (a*.4));
  }
  return 0;
}
