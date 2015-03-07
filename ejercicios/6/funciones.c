#include <stdio.h>
#include <string.h>

//Pre: Entra una letra
//Post: Devolver un 1 si la letra es una letra 'a'. Si no, devolver 0.
int es_una_A(char letra)
{
	// ERROR DE BURRO
	// Compara char no se usa strcmp. No usar strcmp. ESO ES PARA CADENAS. Puntero a char
	//(strcmp(letra, 'a')
	// Daba error. Se esperaba puntero a char y era un char.
	if (letra == 'a')
		return 1;
	else
		return 0;
}

int main(void)
{
	int i;
	char cadena[40] = "Hola dola pepsi cola\n";

	for (i = 1; i < strlen(cadena); i++) {
		if (es_una_A(cadena[i]))
			printf("En la posicion %d tenemos una letra 'a'\n", i);
	}

	printf("\nLas posiciones son los indices. Recordemos que empiezan en 0");
	return 0;
}
