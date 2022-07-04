#include<stdio.h>
int main()
{
  int A,B,C,count=5;
  scanf("%d %d %d", &A, &B, &C);
  if(A==B && B!=C || B==C && C!=A || C==A && A!=B)
  {
    count++;
  }
  else
  {
    count--;
  }
  printf("%d\n", count);
  return 0;

}
