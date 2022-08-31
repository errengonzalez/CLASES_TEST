#include <stdlib.h>
#include <stdio.h>


int main(void) {
	setbuf(stdout, NULL);
		//primer programacion

		// pedir dos numeros al usuario
		// sumarlos
		//mostrar suma

	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("\n Ingrese primer numero \n");
	scanf("%d", &primerNumero);

	printf("\n Ingrese segundo numero \n");
	scanf("%d", &segundoNumero);

	resultado = primerNumero + segundoNumero;

	printf(" Tu resultado es: %d", resultado);

	return EXIT_SUCCESS;
}
