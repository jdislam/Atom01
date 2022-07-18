#include<stdio.h>

int leap(int y)
{
  if( y%4==0 && (y%100!=0 || y%400==0) ) return 1;
  else return 0;
}

int main(void)
{
 int i,x,y,count=0,k=1;
    printf("ENTER THE RANGE \n");
    scanf("%d %d",&x,&y);

    for(i=x;i<=y;i++)
    {
      if(leap(i)==1){
        printf("%d = %d\n",k++,i);
        count++;
      }
    }
    printf("\n\nTHERE ARE %d LEAP YEARS",count);
  return 0;
}
