/*Esta funcion recorrer la cadena de caracteres y comparar si es igual a dicha letra.
Si es asi aumentar un contador que devolveremos al finalizar de recorrer. */

int cuenta_numero_letras(char cadena[], char letra)
{
	int cont = 0, i;

	for (i=0; i< strlen(cadena); i++) {
		if (cadena[i] == letra)
			cont++;
	}
	return cont;
}

/*Esta funcion devolvera 1 si la dos cadenas son iguales; en caso contrario, devolvera 0.
Nota: Usar la funcion strcmp. Buscar funcionamiento de la funcion via Google.*/
int compara_cadena(char *cadena1, char *cadena2){
	int son_iguales = 0;

	if (strcmp(cadena1,cadena2) == 0)
		son_iguales = 1;

	return son_iguales;
}

/* 1.3 Funcion tipo_de_letra
Esta funcion usara el argumento letra comprobar si:
- Si esa letra es una 'a', devolver un 1
- Si esa letra es una 'c', devolver un 2
- Si esa letra es una 'e', devolver un 3
- Si no es ninguna de las anteriores devolver un 0.
Se valorara el uso de switch.*/

int tipo_de_letra (char letra)
{
	int res;

	switch (letra)
	{
	case 'a':
		res = 1;
		break;
	case 'c':
		res = 2;
		break;
	case 'e':
		res = 3;
		break;
	default:
		res = 0;
	}
	// PREGUNTA: Estaria bien poner un return por cada caso del switch.
	// Entiendo que no puesto que son muchos casos y creo que es un mal estilo
	// sobre todo a la hora de depurar
	return res;
}

/*  1.4 Funcion primera_letra
Esta funcion recorrera la cadena de caracteres, devolvera la posicion de la primera
letra que sea igual al argumento letra. Se valorara el uso de break y continue.*/

int primera_letra(char cadena[], char letra)
{
	int i, pos = -1;
	for (i = 0; i < strlen(cadena); i++){
		if (cadena[i] == letra)
		{
			pos = i;
			break;
		}
	}
	// Si pos es igual a -1 quiere decir que no se ha encontrado la letra.
	return pos;
}

/* 1.5 Funcion cambia_letras
Esta funcion recorrera la cadena de caracteres y comprobara si la cadena de caracteres
contiene la letra que pasamos por el  argumento letraoriginal.
- Si es asi, sustituira la letra de la cadena de caracteres por la letra a cambiar
(letracambiar).
- En caso contrario, seguira buscando. */

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int i;
	int letraCambiada = 0;

	for (i=0; i < strlen(cadena); i++)
	{
		if (cadena[i] == letraoriginal)
		{
			cadena[i] = letracambiar;
			letraCambiada = 1;
		}
	}

	return letraCambiada;
}

/* 1.6.b Funcion suma_numeros. He hecho esta porque me equivoque al interpretar el
 enunciado de la 6
Esta funcion devolvera la suma de los numeros entre entre n y m*/
int suma_numeros (int n, int m)
{
	return n + m;
}

int suma_numeros_acotados (int n, int m)
{
	int menor = 0, mayor = 0, suma = 0, i;

	// Yo voy a controlar cual de los dos numeros es menor y mayor
	// La suma para mi
	// Si son iguales considerare que la suma es 0
	// La suma para mi son los números que va a haber entre el menor y el mayor
	// sin incluir ninguno de estos.
	if(n < m)
	{
		menor = n;
		mayor = m;
	}
	else if (n > m){
		menor = m;
		mayor = n;
	}else
		suma = 0;

	// En el caso de que sean iguales no debe entrar en el bucle
	// Esta bien como esta puesto que menor y mayor son 0 y no entraria.
	for (i = menor+1; i < mayor; i++)
		suma += i;

	return suma;
}

/*1.7 Funcion resta_numeros
Esta funcion devolvera la resta entre n y m.*/
int resta_numeros (int n, int m){
	return n-m;
}

/*1.8 Funcion multiplica_numeros
Esta funcion devolvera la multiplicacion entre n y m.*/
int multiplican_numeros (int n, int m){
	return n * m;
}
