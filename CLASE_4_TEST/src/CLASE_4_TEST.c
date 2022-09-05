/*
 ============================================================================
 Name        : CLASE_4_TEST.c
 Author      : rodrigo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

		// CLASE 4 FUNCIONES Y BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include "operacionesAritmeticas.h"

		// CADA BIBLIOTECA SIGUE UN CONCEPTO

	// nombreBiblioteca.h
	// nombreBiblioteca.c

/*
int main(void)
{
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int resultado;
	float resultadoDivision;

	printf("INGRESE UN NUMERO: \n");
	scanf("%d", &num1);

	printf("INGRESE OTRO NUMERO: \n");
	scanf("%d", &num2);

	resultado = CalcularSuma(num1, num2);
	resultadoDivision = CalcularDivision(num1, num2);

	printf("EL RESULTADO DE LA SUMA ES: %d\n", resultado);
	printf("EL RESULTADO DE LA DIVISIONES: %.2f\n", resultadoDivision);

	return EXIT_SUCCESS;
}

*/

int main(void)
{
	setbuf(stdout, NULL);
	int resultado;

	resultado = CalcularFactorial(5);

	printf("EL FACTORIAL DE 5 ES: %d", resultado);




	return EXIT_SUCCESS;
}

