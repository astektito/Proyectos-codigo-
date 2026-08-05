#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    float num=0;
    printf("ingrese un numero ");
    scanf("%f",&num);

    printf("numero ingresado: %f\n", num);
    printf("numero redondeado: %d\n", (int)round(num));

    return 0;
}


