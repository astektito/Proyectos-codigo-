#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float num=0;
    int aux=0;
    printf("ingrese un numero ");
    scanf("%f",&num);

    num=num*10;
    aux=num/10;
    printf("numero: %1f \n %i\n",num,aux);
    if (aux>=5)
    {
        aux*=10;
        printf("numero: %i",aux+10);
    }


}


