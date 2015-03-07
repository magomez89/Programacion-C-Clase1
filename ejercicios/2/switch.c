/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es 0, si es así imprimir un mensaje diciendo que se ha recibido un 0.
 * Si es un uno, mensaje confirmando que se ha recibido un uno. En los demas
 * casos imprimir un mensaje diciendo que no es un valor esperado.
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main(void)
{
	/* Declaración de variables */
	int valor = 0;

	/* Código usando condicional switch */
	switch (valor) {
	// CODING STYLE. case siempre en las misma identación que el switch
	case 0:
		// CODING STYLE. código de los case con una identación
		printf ("El valor es 0\n");
		break;
	case 1:
		printf ("El valor no es 0\n");
		break;
	default:
		// Es bueno poner un printf en el default
		printf ("Valor incorrecto. Solo me vale 0 o 1\n");
		break;

	}
}
