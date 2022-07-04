
#include<stdio.h>
int main()
{
    int A,B,C,count=5;
    scanf("%d %d %d", &A, &B, &C);

    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
        if(A==B && B==C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B && B!=C || B==C && C!=A || C==A && A!=B)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(A*A==B*B+C*C)
    {
        printf("TRIANGULO RETANGULO\n");
        if(A==B && B==C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B && B!=C || B==C && C!=A || C==A && A!=B)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(A*A>B*B+C*C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if(A==B && B==C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B && B!=C || B==C && C!=A || C==A && A!=B)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(A*A<B*B+C*C)
    {
        printf("TRIANGULO ACUTANGULO\n");
        if(A==B && B==C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B && B!=C || B==C && C!=A || C==A && A!=B)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}
