#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int sumadigitos (int n)
{
	if (n==0)
		return(0);
	else
		return ((n%10) + sumadigitos(n/10));
}
int raizdigital (int n)
{
	while(n>9)
		n=sumadigitos(n);
	return(n);
}
int main()
{
	int a;
	printf("\nIntroduzca un numero:\n\n");
	scanf("%d*c%",&a);
	printf("suma digitos es %d",n);
	if(a<0)
		printf("\nError: numero negativo\n");
	else
	{
		printf("\nLa suma de sus digitos es %d\n", sumadigitos(a));
		printf("\nSu raiz digital es %d\n", raizdigital(a));
	}

}
