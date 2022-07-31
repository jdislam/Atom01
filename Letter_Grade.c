#include<stdio.h>
int main()
{
  int m;
  scanf("%d", &m);
  if(m>=80)
  {
    printf("A+\n");
  }
  else if(m>=75)
  {
    printf("A\n");
  }
  else if(m>=70)
  {
    printf("A-\n");
  }
  else if(m>=65)
  {
    printf("B+\n");
  }
  else if(m>=60)
  {
    printf("B\n");
  }
  else if(m>=55)
  {
    printf("B-\n");
  }
  else if(m>=50)
  {
    printf("C+\n");
  }
  else if(m>=45)
  {
    printf("C\n");
  }
  else if(m>=40)
  {
    printf("D\n");
  }
  else
  {
    printf("F\n");
  }
  return 0;
}
