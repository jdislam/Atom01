#include<stdio.h>

int main(void)
{
    int i,j,n;

    printf("Enter a number -> ");
    scanf("%d",&n);

    // printing the upper design
    for(i=1; i<=n; i++)
    {
        // upper left star printing
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        //upper spaces printing
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }
        //upper right star printing
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //printing the lower design
    for(i=1; i<=n; i++)
    {
        //printing the lower left stars
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        //printing the lower spaces
        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }
        //printig the lower right stars
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
