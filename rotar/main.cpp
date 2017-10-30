#include <stdio.h>
void rotar(int *vec)
{
    int aux=0;
    for(int i=0;i<5;i++)
    {
        for(int x=0;x<5;x++)
        {
            printf("%d",*(vec+x));
        }
        printf("\n");
        for(int j=0;j<4;j++)
        {
            aux=*(vec+j);
            *(vec+j)=*(vec+j+1);
            *(vec+j+1)=aux;
        }

    }
}
int main()
{
    int vec[5];
    char D[10];
    gets(D);
    for(int i=0;i<5;i++)
    {
        printf("Ingrese un numero ");
        scanf("%d",&vec[i]);
    }
    rotar(vec);

}
