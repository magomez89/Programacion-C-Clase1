/* Recorrer una cadena de caracteres de nombre "cadena". Comprobar si la
 * posicion i de la cadena es un igual a una letra 'a'. Si no es asi continuamos
 * buscando. Si es asi, debemos comprobar si i+1 es una letra 's'. Si es una
 * 's' iremos a una etiqueta de nombre "es_s" la cual imprimimos que tenemos
 * una 'a' seguida de una 's' y devolvemos un 1. Si no es una letra 's'.
 * Finalizamos la ejecucion del for, imprimimos un mensaje del tipo no tenemos
 * una 'a' seguida de una 's' y devolvemos 0.

/* Bibliotecas a incluir */
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* Declaracion de variables */
	char cadena[20] = "pruebas";
	int i = 0, hay_a = 0;
	/* Codigo usando condicional for */
	for (i = 0; i < strlen(cadena); i++) {
		if(cadena[i] == 'a')
		{
			hay_a = 1;
			if(cadena[i+1] == 's')
				goto es_s;
			else{
				printf ("No hay una s despues de la a en %s \n", cadena);
				// Finalizamos la ejecución del bucle con el for
				break;
			}
		}
	}

	if(hay_a == 0)
		printf ("No hay una a en la cadena");

	return 0;
	/* Declaracion de etiquetas */
	es_s:
		printf ("Hay una s despues de la a en %s \n", cadena);
		return 1;

}
