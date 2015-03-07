/* Zona para incluir las bibliotecas o las cabeceras */
#include <assert.h>
#include <stdio.h>
#include "utils.h"

/* Zona para declarar la funcion estatica */
/*- static int test1(void): Esta función comprobará las funciones 1.1, 1.2 y 1.3
declaradas anteriormente. Llamaremos a dichas funciones y utilizando la
sentencia assert comprobar si el valor devuelto es el esperado.
*/
static int test1(void){
	char cadena[20] = "paparapa";
	char cadena2[20] = "paparapa";
	char cadena3[20] = "otra";
	char letra = 'a';

	assert(cuenta_numero_letras (cadena, letra) == 4);
	// CASO. Las cadenas son iguales.
	assert(compara_cadena (cadena,cadena2) == 1 );
	// CASO 2. Las cadenas son distintas
	assert(compara_cadena (cadena,cadena3) == 0);

	// CASO 1. Es una a. Debe devolver un 1
	assert(tipo_de_letra('a') == 1);
	// CASO 2. Es una c. Debe devolver un 2
	assert(tipo_de_letra('c') == 2);
	// CASO 3. Es una e. Debe devolver un 3
	assert(tipo_de_letra('e') == 3);
	// CASO 4. Es cualquier otra letra. Debe devolver un 0
	assert(tipo_de_letra('z') == 0);

	return 1;
}

static int test2(void)
{
	char cadena[20] = "prueba cadena";
	assert(primera_letra(cadena, 'a') == 5);
	assert(primera_letra(cadena,' ') == 6);

	assert(suma_numeros (13,19) == 32 );

	assert(suma_numeros_acotados (13,19) == 80);
	assert(suma_numeros_acotados (19,13) == 80);
	assert(suma_numeros_acotados (19,19) == 0);

	return 1;
}

/* Funcion principal */
int main(void)
{
	test1();
	test2();
	char cadena[20] = "prueba cadena";
	printf("Cadena original: %s\n", cadena);
	cambia_letras(cadena,' ','s');
	printf("Cadena cambiada: %s\n", cadena);
	return 1;
}
