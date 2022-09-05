/*
 * operacionesAritmeticas.c
 *
 *  Created on: 31 ago. 2022
 *      Author: rodri
 */
#include "operacionesAritmeticas.h"

int CalcularSuma(int uno, int dos)
{
	int resultado;
	resultado = uno + dos;
	return resultado;
}

float CalcularDivision(int uno, int dos)
{
	float resultado;
	if(dos != 0)
	{
		resultado = (float)uno / dos;
	}
	else
	{
		printf("NO SE PUEDE DIVIDIR POR CERO \n");
		resultado = 0;
	}

	return resultado;
}

int CalcularFactorial(int numero)
{
	int factorial;

	if(numero == 0)
	{
		factorial = 1;
	}
	else
	{
		factorial = numero * CalcularFactorial(numero -1);
	}
	return factorial;
}
