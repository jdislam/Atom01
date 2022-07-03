#include<stdio.h>
int main ()
{
    int a[3];

    int b[3];

    int c;

    for(c=0; c<3; c++)
    {
        scanf("%d", &a[c]);
    }
    if (a[0]<a[1])
    {
        if (a[0] < a[2])
        {
            b[0]=a[0];

            if (a[1] < a[2])
            {
                b[1]=a[1];
                b[2]=a[2];
            }
            else
            {
                b[1]=a[2];
                b[2]=a[1];
            }
        }
        else
        {
            b[0]=a[2];
            if (a[1] < a[0])
            {
                b[1]=a[1];
                b[2]=a[0];
            }
            else
            {
                b[1]=a[0];
                b[2]=a[1];
            }
        }
    }
    else
    {
        if (a[1]<a[2])
        {
            b[0]=a[1];

            if (a[0] < a[2])
            {
                b[1]=a[0];
                b[2]=a[2];
            }
            else
            {
              b[1]=a[2];
              b[2]=a[0];
            }
        }
        else
        {
            b[0]=a[2];
            if (a[1] < a[0])
            {
              b[1]=a[1];
              b[2]=a[0];
            }
            else
            {
              b[1]=a[0];
              b[2]=a[1];
            }
        }
    }
    printf("%d\n%d\n%d\n\n", b[0],b[1],b[2]);

    for(c=0; c<3; c++)
    {

      printf("%d\n", a[c]);
    }

    return 0;
}
