///n is the size of array arr..input 10 numbers and show the output and then show the number which are greater than the average


#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d", &n);
  int arr[n];
  for(i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for(i=0; i<n; i++)
  {
    printf("%d ", arr[i]);
  }
  int average, sum=0;
  for(i=0; i<n; i++)
  {
    sum+=arr[i];
  }
  average=sum/n;
  for(i=0; i<n; i++)
  {
    if(average<arr[i])
    {
      printf("\n%d ", arr[i]);
    }
  }
  return 0;
}
