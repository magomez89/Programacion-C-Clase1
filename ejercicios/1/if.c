/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es mayor que 5, si es así imprimir un mensaje usando printf confirmando
 * que es mayor. En caso contrario, escribir un mensaje
 */

/* Bibliotecas a incluir */
#include <stdio.h>
//Respetar hueco abajo de los include

void main(void) {
	/* Declaración de variables */
	//SIEMPRE SE DEBE PONER TABULACION después de las llaves
	int valor = 5;
	//Respetar hueco abajo de la zona de declaración de variables

	/* Código usando condicional if */
	if (valor<5)
		//Siempre poner tabulación después de los if y funciones.
		printf ("Usted esta suspenso\n");
	else
		printf ("Usted ha aprobado\n");
}
