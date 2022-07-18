#include<stdio.h>

/* atom e main funtion er upore user define funtion rakha lage..tobe code
blocks e jekunu jaygay user define funtion rakhlei hoy.*/

//sikhbo kivabe duita number add kore shetar function ready kora
/*
funtion dui jater....
1 no jat (void na)=== int ,char, float , double , long ....ei jater manushera return kore ebong jodi kore na tahobe egula kaj korbe na.
2 no jat == egula void typer funtion. era onek porisromi manush. shobsomoy kaj kore naile kunu na kunu kisu print kore chole jay kintu return kore na kisui. eke taka deya thik na...
*/

/*funtion dekhte kirup

....

jater_nam funtion_er_nam(kisu ekta...eke range ba perameter bola hoy)
{
    ei khane habi jabi shob kaj hoy ja funtion kore thake.
}
*/

int jug(int a,int b)// perameter e amra shadharonoto kisu variablediye thaki
{
 return a+b;
}

void main()
{
 int x=8,y=10;
 printf("%d",jug(x,y));
}
