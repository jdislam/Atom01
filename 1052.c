#include<stdio.h>
int main()
{
  int a;
  scanf("%d", &a);

  switch (a)
    {
      case 1 : a=1 ; printf("January\n"); break;
      case 2 : a=2 ; printf("February\n"); break;
      case 3 : a=3 ; printf("March\n"); break;
      case 4 : a=4 ; printf("April\n"); break;
      case 5 : a=5 ; printf("May\n"); break;
      case 6 : a=6 ; printf("June\n"); break;
      case 7 : a=7 ; printf("July\n"); break;
      case 8 : a=8 ; printf("August\n"); break;
      case 9 : a=9 ; printf("September\n"); break;
      case 10 : a=10 ; printf("October\n"); break;
      case 11 : a=11 ; printf("November\n"); break;
      case 12 : a=12 ; printf("December\n"); break;
  }
  return 0;
}
