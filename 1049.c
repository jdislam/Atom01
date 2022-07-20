#include<stdio.h>
int main()
{
  char str[100],str1[100],str2[100];
  scanf("%s %s %s",str, str1, str2);

  if(str[0]=='v')
  {
    if(str1[0]=='a')
    {
      if(str2[0]=='c')
      {
        printf("aguia\n");
      }
      else printf("pomba\n");
    }
  }
  if(str[0]=='v')
  {
    if(str1[0]=='m')
    {
      if(str2[0]=='o')
      {
        printf("homem\n");
      }
      else printf("vaca\n");
    }
  }
  if(str[0]=='i')
  {
    if(str1[0]=='i')
    {
      if(str2[2]=='m')
      {
        printf("pulga\n");
      }
      else printf("lagarta\n");
    }
  }
  if(str[0]=='i')
  {
    if(str1[0]=='a')
    {
      if(str2[0]=='h')
      {
        printf("sanguessuga\n");
      }
      else printf("minhoca\n");
    }
  }
  return 0;
}
