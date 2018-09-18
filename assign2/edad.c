#include<stdio.h>
#include<stdlib.h>

// inicio
int main()
{
	// declarar variable entera a
	int a;

// hacer limpia pantalla 
	system("clear");
// Escribir saludo
	printf("\n\nBienvenido, este programa te dira si eres mayor de edad\n");

// Escribir Escriba su edad por favor
	printf("\nEscriba su edad por favor: ");
// leer a
	scanf("%i",&a);

// si a > 18
	if(a>=18)
	{
// Escribir Eres mayor de edad
		printf("Eres mayor de edad!\n\n");
	}
// de lo contrario
	else
	{
// Escribir Eres menor valla pa la casa
		printf("Eres menor, valla pa la casa\n\n");
	}
// fin si

// fin
	return 0;
}
