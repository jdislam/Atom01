#include<stdio.h>

int main(void)
{
   int i,j,n;
   printf("Enter a number = ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("*");
      }
      int spaces = 2*(n-i);
      for(j=1;j<=spaces;j++)
      {
        printf(" ");
      }
      for(j=1;j<=i;j++)
      {
        printf("*");
      }
      printf("\n");
    }

    for(i=n;i>=1;i--)
     {
       for(j=1;j<=i;j++)
       {
         printf("*");
       }
       int spaces = 2*(n-i);
       for(j=1;j<=spaces;j++)
       {
         printf(" ");
       }
       for(j=1;j<=i;j++)
       {
         printf("*");
       }
       printf("\n");
     }

  return 0;
}
