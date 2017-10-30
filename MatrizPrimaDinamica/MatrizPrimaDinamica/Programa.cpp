/***********************************************
*   Programa: Numero Primos en una Matriz      *
*	Autor: Daniel Pallo					       *
*	Fecha Creación: 03/11/2016				   *
*	Fecha Modificación: 08/11/2016             *
*	Carrera: Sistemas e Informatica			   *
*	Profesor: Ing Fernando Solis			   *
************************************************/
//Librerias
#include<iostream>
#include <stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
//Prototipos de Funciones
void leerDatos(int *, int *);
void ingreso(int **, int , int );
void proceso(int **, int, int);
void imprimir(int **, int, int);
//Implementacion de (desarrollo) funciones
//Funcion para ingresar el numero de filas y columnas
void leerDatos(int *fila, int *columna) {
	printf("Ingrese el numero de filas: ");
	scanf_s("%d", fila);
	printf("Ingrese el numero de columnas: ");
	scanf_s("%d", columna);
}
//Funcion para ingresar datos en una matriz
void ingreso(int **matriz, int fila, int columna) {
	for (int i = 1; i <= fila; i++) {
		for (int j = 1; j <= columna; j++) {
			printf("Ingrese el valor en la pos (%d,%d) = ", i, j);
			scanf_s("%d", *(*(&matriz) + i) + j);
		}
	}
}
//Funcion para el proceso de encontrar los numeros primos en la matriz
void proceso(int **matriz, int fila, int columna) {
	//varible cont para verificar cuantas veces realiza el proceso
	int cont = 0;
	//Bucle externo incremental
	for (int i = 1; i <= fila; i++) {
		//Bucle interno incremental
		for (int j = 1; j <= columna; j++) {
			//Bucle interno incremental
			for (int k = 1; k <= *(*(&(*matriz) + i) + j); k++)
			{
				//Si el numero en la posicion(m,n) su residuo es 0 aumenta cont en 1
				if (*(*(&(*matriz) + i) + j) % k == 0)
				{
					cont++;
				}
			}
			//Si el cont es igual a 2 veces que es la que un numero primo se puede dividir valida si lo es o no.
			if (cont == 2)
			{
				printf("El numero es primo= ");
				printf("%d", *(*(&(*matriz) + i) + j));
				printf("\n");
				cont = 0;
			}
			else
			{
				printf("El numero no es primo= ");
				printf("%d", *(*(&(*matriz) + i) + j));
				printf("\n");
				cont = 0;
			}
		}
		printf("\n");
	}
}
//Funcion para imprimir la matriz segun su fila y columna.
void imprimir(int **matriz, int fila, int columna) {
	for (int i = 1; i<=fila; i++) {
		for (int j = 1; j<=columna; j++) {
			printf("%d     ", *(*(&(*matriz) + i) + j),"     ");
		}
		printf("\n");
	}
}

void main() {
	//Invocacion a funciones en el programa principal
	int f1 = 0, c1 = 0;
	printf("\t\t PROGRAMA SACAR NUMEROS PRIMOS DE UNA MATRIZ\n");
	leerDatos(&f1, &c1);
	//Creación de memoria dinamica.
	int **mat = (int**)malloc(f1 * sizeof(int));
	for (int i = 1; i<=f1; i++)
		*(&(*(mat + i))) = (int*)malloc(c1 * sizeof(int));
	ingreso(mat, f1, c1);
	printf("La matriz ingresada es: \n");
	imprimir(mat, f1, c1);
	printf("\n\n");
	proceso(mat, f1, c1);
	system("pause");

}