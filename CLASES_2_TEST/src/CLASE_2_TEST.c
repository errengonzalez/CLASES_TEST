/*
 ============================================================================
 Name        : CLASE_2_TEST.c
 Author      : rodrigo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3

int main(void)
{
	setbuf(stdout, NULL);
	/*
	int numero;

	printf("Numero: ");
	scanf("%i", &numero);

	while(numero < 0)
	{
		printf("Numero: ");
		scanf("%i", &numero);
	}

	do{
		printf("Numero: ");
		scanf("%i", &numero);
	}while(numero == 999);
*/
	/*
	char d;

	for(;;){
		d = getc(stdin);
		//scanf("%c", &d);
		printf("%c",d);

		if(d == 's')
			break;
	}
	*/
	/*
	int dato;
	printf("Dato: ");
	scanf("%d", &dato);

	if(dato){
		printf("El valor de dato es: %d VERDADERO", dato);
	}
	else{
		printf("El valor de dato es: %d FALSO", dato);
	}
	*/
/*
		int i;
		int suma = 0;
		    //A     B     C
		for(i = 0; i < 100; i=i+1)
		{
			suma = suma + i; // suma += i;
			printf("\nEl valor de suma es: %d", suma);
		}

*/
	//contador i
	  // variable = variable + k

	//acumulador suma
	  // variable = variable + otraVariable


	//i = i + 1
	//1ra vez: A y B
	//2da vez en adelante: C y B

/*		char dato;

		printf("Dato: ");
		scanf("%c", &dato);

		switch(dato)
		{
			case 'A':
				printf("El valor ingresado es A");
				break;
			case 'B':
				printf("El valor ingresado es B");
				break;
			default:
				printf("El valor ingresado es distinto de A y B");
		}
*/
int edad;
int contador = 0;
int acumulador = 0;
float promedio;
int i;

	for(i = 0; i < CANTIDAD; i++)
	{
		printf("edad: ");
		scanf("%d", &edad);
		contador = contador + i;
		acumulador = acumulador + edad;
	}

	promedio = (float)acumulador / contador;

	// 23 35 27 = 28.33

	printf("El promedio de edades ingresadas es %.2f", promedio);

		return 0;
}

//true false NO existe en C
//false es cero
//true cualquier valor distinto de cero

// CLASE DE ACUMULADORES Y CONTADORES
/*
 *  CONTADOR I
 * 			VARIABLE = VARIABLE + I
 *
 *	ACUMULADOR SUMA
 *			VARIABLE = VARIABLE + OTRA VARUABLE
 *
 *
 *	FALSE = 0;
 *	TRUE 1;
 *
	// PARA UN CHAR
		printf("Ingrese sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);
 *
 *	// PARA STRING
		printf("Ingrese nombre: ");
		fflush(stdin);
		scanf("%s", nombre);
 *
 *
 * */
