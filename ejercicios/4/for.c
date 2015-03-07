/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>

void main()
{
	/* Declaración de variables */
	int len = 0, i = 0;
	char cadena[10] = "HOLA";

	/* Código usando condicional while */
	for (i = 0; i < 10; i++){
		if (cadena[i] != '\0')
			len ++;
	}

	printf ("La longitud de cadena es : %d\n", len);
}
