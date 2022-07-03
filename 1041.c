#include<stdio.h>
int main()
{
  float Exio_X, Exio_Y;
  scanf("%f %f", &Exio_X, &Exio_Y);
  if(Exio_X>0 && Exio_Y>0)
  {
    printf("Q1\n");
  }
  else if(Exio_X<0 && Exio_Y>0)
  {
    printf("Q2\n");
  }
  else if(Exio_X<0 && Exio_Y<0)
  {
    printf("Q3\n");
  }
  else if(Exio_X>0 && Exio_Y<0)
  {
    printf("Q4\n");
  }
  else if(Exio_X == 0 && Exio_Y == 0)
  {
    printf("Origem\n");
  }
  else if(Exio_X>0 && Exio_Y==0)
  {
    printf("Eixo X\n");
  }
  else if(Exio_X<0 && Exio_Y==0)
  {
    printf("Eixo X\n");
  }
  else if(Exio_X==0 && Exio_Y>0)
  {
    printf("Eixo Y\n");
  }
  else if(Exio_X==0 && Exio_Y<0)
  {
    printf("Eixo Y\n");
  }
  return 0;
}
