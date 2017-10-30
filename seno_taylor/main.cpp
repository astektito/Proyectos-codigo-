#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int factorial (int);

int main()
{
    int k,n=0;
    double  x,sinx=0.0,seno;
    double  pro,den,pot;
    printf ("introduce el valor de k: ");
    scanf ("%d",&k);
    printf ("\nintroduce el valor del angulo en radianes: ");
    scanf ("%lf",&x);
    while (n<=k)
    {
           // esta es una prueba con la formula toda junta, sin casting
          //seno =((pow (-1,n))/factorial(2*n+1))*(pow(x,2*n+1));
          pot=(double) pow(-1,n);
          den=(double) factorial(2*n+1);
          pro=(double)pow(x,2*n+1);
          seno= ((double)pot/(double)den)*(double)pro;
          sinx= sinx + seno;
          printf("\nEl elemento n=%d es %lf y la suma va siendo %lf",n,seno,sinx);
          n++;

    }
    printf ("\nEl valor del seno es:%lf",sinx);
    getch();
}
int factorial (int a)
{
    int i,fac;

    fac=1;
    for (i=a;i>0;i--)
    {
        fac=fac*i;
    }
    return fac;
}
