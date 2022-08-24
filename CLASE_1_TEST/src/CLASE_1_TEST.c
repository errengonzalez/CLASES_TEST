/*
 ============================================================================
 Name        : CLASE_1_TEST.c
 Author      : rodrigo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int num3;
	int resultado;

	// PUNTO 1 GUIA TEMA 1


	printf("Ingrese su primer numero ");
	scanf("%d",&num1); // -> AMPERSAN INDICA LA DIRECCION DE MEMORIA DONDE SE VA A ALMACENAR EL DATO

	printf("Ingrese su segundo numero ");
	scanf("%d",&num2);

	resultado = num1 + num2;
	printf("La suma entre %d y %d da como resultado: %d",num1, num2, resultado);


	// 	PUNTO 2 GUIA TEMA 1

	printf("Ingrese su primer numero ");
	scanf("%d",&num1);

	printf("Ingrese su segundo numero ");
	scanf("%d",&num2);

	printf("Ingrese su tercer numero ");
	scanf("%d",&num3);

	if(num1 > num2 && num1 > num3)
	{
		printf("El mayor de los numeros es el primero");
	}
	else
	{
		if(num2 > num3 && num2 > num1)
		{
			printf("El mayor de los numeros es el segundo");
		}
		else
		{
			printf("El mayor de los numeros es el tercero");
		}
	}


	// PUNTO 3 GUIA TEMA 1

	if(num1 != num2 && num1 != num3 && num2 != num3)
	{
		if((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
		{
			printf(" %d %d %d el %d es del medio", num1, num2, num3, num1);
		}
		else
		{
			if((num2 >num1 && num2 < num3) || ( num2 < num1 && num2 > num3))
			{
				printf(" %d %d %d el %d es del medio", num1, num2, num3, num2);
			}
			else
			{
				printf(" %d %d %d el %d es del medio", num1, num2, num3, num3);
			}
		}
	}
	else
	{
		printf(" %d %d %d No hay numero del medio ",num1, num2, num3);
	}
	return EXIT_SUCCESS;
}
	//  %c (char) , %d (int) , %f (float)
