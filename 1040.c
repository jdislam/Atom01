#include<stdio.h>
int main()
{
  float N1,N2,N3,N4,N5, ava, ava2;
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
  ava=(N1*2+N2*3+N3*4+N4*1)/10;
  printf("Media: %.1f\n", ava);
  if(ava>=7.0)
  {
    printf("Aluno aprovado.\n");
  }
  else if(ava<5.0)
  {
    printf("Aluno reprovado.\n");
  }
  else
  {
    printf("Aluno em exame.\n");
    scanf("%f", &N5);
    printf("Nota do exame: %.1f\n", N5);
    ava2=(ava+N5)/2;
    if(ava2>=5.0)
    printf("Aluno aprovado.\n");
    else
    {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",ava2);
  }
  return 0;
}
