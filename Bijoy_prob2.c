///n is the size or array arr. arr is an integer type array. input 5 negative numbers in that array and 5 positive numbers in the array at the same time. then print the whole array at once then just print the negative numbers in an array and positive numbers in a separate array....input = -1 -2 -3 -4 -5 1 2 3 4 5 .....output -1 -2 -3 -4 -5 1 2 3 4 5 negative = -1 -2 -3 -4 -5 positives = 1 2 3 4 5

#include<stdio.h>
int main()
{
    int n,i,pos_count=0, neg_count=0;
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
    printf("\nnegative = ");
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\npositive = ");
    for(i=0;i<n;i++)
    {
      if(arr[i]>0)
        {
            printf("%d ", arr[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        if (arr[i] >=0)
        {
            pos_count++;
        }
        else
        {
          neg_count++;
        }
    }
    printf("\npositive %d", pos_count);
    printf("\nnegative %d", neg_count);
    return 0;
}
