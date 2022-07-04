#include<stdio.h>
int main()
{
    int A,B,C,A1,A2,A3;
    scanf("%d %d %d", &A, &B, &C);

    if (A>B)
    {
        if (A > C)
        {
            A1= A;

            if (B>C)
            {
                A2=B;
                A3=C;
            }
            else
            {
                A2=C;
                A3=B;
            }
        }
        else
        {
            A1=C;
            if (B>A)
            {
                A2=B;
                A3=A;
            }
            else
            {
                A2=A;
                A3=B;
            }
        }
    }
    else
    {
        if (B>C)
        {
            A1=B;

            if (A>C)
            {
                A2=A;
                A3=C;
            }
            else
            {
                A2=C;
                A3=A;
            }
        }
        else
        {
            A1=C;

            if (B>A)
            {
                A2=B;
                A3=A;
            }
            else
            {
                A2=A;
                A3=B;
            }
        }
    }
    if(A1>=A2+A3)
    {
        printf("NAO FORMA TRIANGULO\n");
        if(A1==A2 && A2==A3)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A1==A2 && A2!=A3 || A2==A3 && A3!=A1 || A3==A1 && A1!=A2)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(A1*A1==A2*A2+A3*A3)
    {
        printf("TRIANGULO RETANGULO\n");
        if(A1==A2 && A2==A3)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A1==A2 && A2!=A3 || A2==A3 && A3!=A1 || A3==A1 && A1!=A2)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(A1*A1>A2*A2+A3*A3)
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if(A1==A2 && A2==A3)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A1==A2 && A2!=A3 || A2==A3 && A3!=A1 || A3==A1 && A1!=A2)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(A1*A1<A2*A2+A3*A3)
    {
        printf("TRIANGULO ACUTANGULO\n");
        if(A1==A2 && A2==A3)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A1==A2 && A2!=A3 || A2==A3 && A3!=A1 || A3==A1 && A1!=A2)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}
