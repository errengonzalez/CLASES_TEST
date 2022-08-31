/*
 ============================================================================
 Name        : CLASES_3_TEST.c
 Author      : rodrigo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
	// CLASE 3 FUNCIONES


#include <stdio.h>
#include <stdlib.h>

int CalcularSuma(int numeroUno, int numeroDos);

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	int resultado;
	/*
	 * 			BENEFICIOS DE USAR FUNCIONES:
	 *
	 * 			-MAS FACIL DE LEER
	 * 			-REUTILIZACION
	 *
	 * 			TIPO DATO - NOMNREFUNCION (PARAMETROUNO, PARAMETRODOS);
	 *
	 * */

	printf("INGRESE UN NUMERO \n");
	scanf("%d", &numeroUno);

	printf("INGRESE UN NUMERO \n");
	scanf("%d", &numeroDos);

	resultado = CalcularSuma(numeroUno, numeroDos);

	printf("El valor de la suma es: %d\n",resultado);

	return EXIT_SUCCESS;
}

int CalcularSuma(int numeroUno, int numeroDos)
{
	int resultado;
	resultado = numeroUno + numeroDos;
	return resultado;
}
